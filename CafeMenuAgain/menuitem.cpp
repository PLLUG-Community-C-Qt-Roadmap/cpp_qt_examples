#include "menuitem.h"

#include <iostream>

MenuItem::MenuItem(double price, double amount, const std::string &name, const std::string &description) :
    mAmount{amount},
    mPrice{price},
    mName{name},
    mDescription{description}
{
}
/*
****************************************************************************************************
*/
void MenuItem::print()
{
    std::cout << mName << " : "
              << mDescription << " - " << mPrice
              << "$ for " << mAmount
              << " kilos " << std::endl;
}
/*
****************************************************************************************************
*/
