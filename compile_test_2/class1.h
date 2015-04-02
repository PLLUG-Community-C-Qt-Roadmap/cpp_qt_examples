#ifndef CLASS1_H
#define CLASS1_H

//Type Class1
class Class1
{
//Access modifier(can be public, private or protected). Default - private.
public:
    //Constructor. Always runs, when object of class is created.
    Class1();
    //Destructor. Always runs, when object of class is deleted.
    ~Class1();

    int mem() const;

    void setMem(int mem);
    static int staticMem();
    static void staticSetMem(Class1 m);

public:
    static int mStaticMem;
    const int cmMem2;

protected:
    int mMem;

private:
    mutable int *mMem3;
};

#endif // CLASS1_H
