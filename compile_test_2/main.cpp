#include <iostream>

#include "second.h"
/*
 ***************************************************************************************************
 */
bool a = true; // true/false

//Integer numbers types
short b1;
int b2;
long b3;
long long b4;

//Character type
char c;

//Fractional numbers types
float d1;
double d2;
long double d3;

//Class, struct and union
class e;
struct f;
union n {
    char a[8];
    int *b;
};

//Const types
const int i = -1;
enum g {c1=0, c2=100, c3=200};
enum class h {c1=0, c2=100, c3=200};

//Pointer and Reference
int i2;
int &j = i2;
int *k = &i2;

//Array
int l[20];

//Pointer for various types
void *z = l;

//Function pointer

void f(int a)
{ }

typedef void (*ftype)(int a) ;
ftype x = &f;
/*
 ***************************************************************************************************
 */
//Type Class1
class Class1
{
//Access modifier(can be public, private or protected). Default - private.
public:
    //Constructor. Always runs, when object of class is created.
    Class1()
    {
        std::cout << "Class1()" <<std::endl;
    }
    //Destructor. Always runs, when object of class is deleted.
    ~Class1()
    {
        std::cout << "~Class1()" <<std::endl;
    }
};
/*
 ***************************************************************************************************
 */
//Type PersonalInformation
class PersonalInformation
{
public:
    //Constructor. Always runs, when object of class is created.
    PersonalInformation()
    {
        //Initialization of mBirthYear member of the class by zero.
        mBirthYear = 0;
    }
    //Method. Function incapsulated in class. Can be used from object of the class, or inside the
    //class.
    //setBirthYear - set mBirthYear by user input year. If condition is incorect - set error.
    void setBirthYear(unsigned int year)
    {
        if ((1900 < year) && (year < 2016))
        {
            mBirthYear = year;
        }
        else
        {
            mError = "Incorrect year";
        }
    }
    //birthYear - returns current year for user.
    unsigned int birthYear()
    {
        return mBirthYear;
    }
    //error - returns last error for user.
    std::string error()
    {
        return mError;
    }

private:
    // private(available only inside current class) class members(fields of class).
    int mBirthYear;
    std::string mError;
};

void func(Class1 param)
{

}

int main()
{
    //Create object of the PersonalInformation class
    PersonalInformation info;
    //set year to 2000
    info.setBirthYear(2000);
    //checking for error
    if (info.error().empty())
    {
        std::cout << info.birthYear();
    }
    else
    {
        std::cout << info.error();
    }
    //Create object of the Class1
    Class1 a;
    func(a);

    return 0;
}

