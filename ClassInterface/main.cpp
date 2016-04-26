#include <iostream>
#include <vector>

using namespace std;
#include <algorithm>

// Our abstract class
class Shape
{
public:
    Shape() {}
    ~Shape()
    {
        auto deleteShape = [](Shape *p)
        {
            cout << "deleting: " << p << endl;
            delete p;
        };

        std::for_each(begin(childShapes),
                      end(childShapes),
                      deleteShape);

//        for(const Shape *shape : childShapes)
//        {
//            delete shape;
//        }
    }

    virtual void draw() const = 0;

    void addShape(Shape *shape)
    {
        childShapes.push_back(shape);
    }

private:
    vector<Shape *> childShapes;
};

void Shape::draw() const
{
    for(const Shape *shape : childShapes)
    {
        shape->draw();
    }
}

class Rectangle : public Shape
{
public:
    virtual void draw() const override
    {
        cout << "Rectangle!" << endl;
        Shape::draw();
    }

};

class Square : public Rectangle
{
public:
    virtual void draw() const override
    {
        cout << "Square!" << endl;
        Shape::draw();
    }
};

class Circle : public Shape
{
public:
    void draw() const override
    {
        cout << "Circle!" << endl;
        Shape::draw();
    }
};

template<class T>
Shape *createAShapeByType()
{
    Shape *shape = new T;
    return shape;
}

#include <time.h>
#include <stdlib.h>

Shape *createAShape()
{
    int randomInt = rand() % 2 + 1;

    Shape *shape = nullptr;
    switch (randomInt)
    {
    case 1:
        shape = new Rectangle;
        break;
    case 2:
        shape = new Circle;
        break;
    default:
        break;
    }

    return shape;
}

//Shape *createAShape()
//{
//    Shape *shape = new Rectangle;
//    return shape;
//}

void drawANewShape(const Shape &shape)
{
    shape.draw();
}

const int cNumberOfShapes = 10;

int main()
{
    srand(time(nullptr));

    Circle *c1 = new Circle;
    Circle *c2 = new Circle;

    Rectangle *rightRect = new Rectangle;
    rightRect->addShape(c1);
    rightRect->addShape(c2);

    Rectangle *r1 = new Rectangle;
    Circle *leftCircle = new Circle;
    leftCircle->addShape(r1);

    Rectangle mainRect;
    mainRect.addShape(leftCircle);
    mainRect.addShape(rightRect);
    mainRect.draw();

//    vector<Shape *> shapeList;



//    for(int i = 0; i < cNumberOfShapes; ++i)
//    {
//        shapeList.push_back(createAShape());
//    }

//    for(auto val : shapeList)
//    {
//        val->draw();
//    }

//    for(auto val : shapeList)
//    {
//        delete val;
//    }

//    Shape *shape = createAShapeByType<Rectangle>();
//    Shape *shape = createAShape(4321432);
//    if (shape)
//    {
//        drawANewShape(*shape);
//    }
//    delete shape;

    return 0;
}
