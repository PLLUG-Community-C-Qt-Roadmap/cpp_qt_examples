#include "product.h"

Product::Product()
{
    _name = "Undef";
    _price = -1;
}

Product::Product(std::string name, int price)
{
    _name = name;
    _price = price;
}

std::string Product::name() const
{
    return _name;
}

int Product::price() const
{
    return _price;
}

