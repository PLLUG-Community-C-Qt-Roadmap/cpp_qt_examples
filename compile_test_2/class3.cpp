#include "class3.h"
#include <iostream>

void Class3::print()
{
    Class2::print();
    std::cout << "Class3 " << std::endl;
}
