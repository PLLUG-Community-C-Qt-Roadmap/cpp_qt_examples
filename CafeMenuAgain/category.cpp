#include "category.h"
#include "menuitem.h"

#include <iostream>


Category::Category(const std::string &name) :
    mName{name}
{
}
/*
****************************************************************************************************
*/
void Category::print()
{
    std::cout << " <<< " << mName << " >>>" << std::endl;

    for (const auto &item: mItems)
    {
        std::cout << "\t";
        item->print();
        std::cout << "\n";
    }

    for (const auto &item: mCategoryItems)
    {
        std::cout << "\t";
        item->print();
        std::cout << "\n";
    }
}
/*
****************************************************************************************************
*/
void Category::addItem(MenuItem *item)
{
    mItems.push_back(item);
}
/*
****************************************************************************************************
*/
