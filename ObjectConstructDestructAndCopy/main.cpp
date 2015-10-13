#include <iostream>
#include <algorithm>
#include <memory>

// Class, with move operations support,
// holding large data
class DataClass
{
public:
    // Default constructor
    DataClass()
    {
        this->data = new char[dataSize()];
        fillWithChar(0);
        std::cout << this << " : DataClass()   [new + fill]" << std::endl;
    }

    // Copy constructor
    DataClass(const DataClass &other)
    {
        this->data = new char[dataSize()];
        std::copy(other.data, other.data + dataSize(), this->data);
        std::cout << this << " : DataClass(const DataClass &other)   [new + copy]" << std::endl;
    }

    // Move constructor
    DataClass(DataClass &&other)
    {
        this->data = other.data;
        other.data = nullptr;
        std::cout << this << " : DataClass(DataClass &&other)   [move!]" << std::endl;
    }

    // Copy assigment operator
    DataClass& operator=(const DataClass &other)
    {
        std::copy(other.data, other.data + dataSize(), this->data);
        std::cout << this << " : operator=(const DataClass &other)   [copy]" << std::endl;
    }

    // Move assigment operator
    DataClass& operator=(DataClass &&other)
    {
        this->data = other.data;
        other.data = nullptr;
        std::cout << this << " : operator=(const DataClass &&other)   [move!]" << std::endl;
    }

    // Public destructor
    ~DataClass()
    {
        delete[] data;
        std::cout << this << " : ~DataClass() [delete]" << std::endl;
    }

    // Getter for data
    const char *getData()
    {
        return data;
    }

    // Fills internal data array with the given character
    void fillWithChar(char ch)
    {
        std::fill(this->data, this->data + dataSize(), ch);
    }

private:
    constexpr static int dataSize()
    { return 1024; }

private:
    char *data;
};

// Class, with move operations support,
// holding large data
class TestClass
{
public:
    TestClass()
    { std::cout << this << " Default Constructor" << std::endl;}

    TestClass(const TestClass &other)
    { std::cout << this << " Copy Constructor" << std::endl; }

    TestClass(TestClass &&other)
    { std::cout << this << " Move Constructor" << std::endl; }

    TestClass& operator=(const TestClass &other)
    { std::cout << this << " Copy Assigment" << std::endl; return *this; }

    TestClass& operator=(TestClass &&other)
    { std::cout << this << " Move Assigment" << std::endl; return *this; }

    ~TestClass()
    { std::cout << this << " Destructor" << std::endl; }
};

int main(int argc, char *argv[])
{
/// Constructors and destructors, assigment

//    {
//        TestClass t;
//    }

//    {
//        TestClass t1;
//        TestClass t2;
//    }

//    {
//        TestClass t1;
//        TestClass t2;
//        t1 = t2;
//    }

//    {
//        TestClass t1;
//        TestClass t2(t1);
//    }

//    {
//        TestClass t1;
//        TestClass t2{t1};
//    }

//    {
//        TestClass t1;
//        TestClass t2 = t1;
//    }

//    {
//        TestClass t1;
//        TestClass t2 = {t1};
//    }

//    {
//        TestClass *t1 {new TestClass};
//        TestClass *t2 {new TestClass};
//        t1 = t2;
//    }

/// Ownership unique_ptr and resource management

//    {
//        TestClass *t1 { new TestClass };
//    }

//    {
//        // #include <memory>
//        std::unique_ptr<TestClass> t1{new TestClass };
//    }

//    {
//        std::unique_ptr<TestClass> t1 = std::make_unique<TestClass>();
//    }

//    {
//        auto t1 = std::make_unique<TestClass>();
//    }

//    {
//        auto t1 = std::make_unique<TestClass>();
//        auto t2 = std::make_unique<TestClass>();
// //        t2 = t1;
// //        TestClass *t3 = t1;
// //        TestClass *t4;
// //        t4 = t1;
//    }

//    {
//        auto t1 = std::make_unique<TestClass>();
//        auto func = [](TestClass *t1) { /*do somth*/};
// //        func(t1);
// //        func(t1.get());
//    }

//    {
//        auto func = []()
//        { return std::make_unique<TestClass>(); };
//        auto t1 = func();
//    }

    return 0;
}

