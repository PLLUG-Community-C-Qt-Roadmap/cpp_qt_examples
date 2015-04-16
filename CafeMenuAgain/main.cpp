#include <iostream>

#include "menuitem.h"
#include "category.h"

int main()
{
    Category *drinks = new Category("drinks");
    MenuItem *vodka = new MenuItem(10.0, 0.100, "absolut", "veeeery gooood");
    drinks->addItem(vodka);

    Category *meat = new Category("delicious meat");
    MenuItem *kurka = new MenuItem(25.0, 0.300, "broiler", "kings choise");
    meat->addItem(kurka);

    drinks->print();
    meat->print();

    delete meat;
    delete drinks;
    delete vodka;
    delete kurka;
    return 0;
}

