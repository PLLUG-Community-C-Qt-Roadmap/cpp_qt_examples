#include <iostream>

#include "class1.h"
#include "class2.h"
#include "class3.h"
#include "cplusplustypes.h"
#include "personalinformation.h"

// Class1 *param = ...
void func(Class1 *param)
{
    param->setMem(13);
}

// Class1 &param = ...
void func(Class1 &param)
{
    param.setMem(13);
}

// Class1 param = ...
void func_no_modify(Class1 param)
{
    param.setMem(13);
}

static Class1 aaa;

int main()
{
    int array[3] = {1,2,3};
    std::cout << array[2] << std::endl;
    std::cout << 2[array] << std::endl;

    Class1 classObj1;
    func_no_modify(classObj1);

    Class1* classObj2 = new Class1();
    classObj2 = 0;
    func(classObj2);
    delete classObj2;

    Class2 classObj3;
    classObj3.setMem(12);
    classObj3.print();
    std::cout << classObj3.mem() << std::endl;

    Class3 classObj4;
    classObj4.print();

    std::cout << Class1::staticMem();

    PersonalInformation info;
    info.setBirthYear(2000);
    if (info.error().empty())
    {
        std::cout << info.birthYear();
    }
    else
    {
        std::cout << info.error();
    }

    return 0;
}
