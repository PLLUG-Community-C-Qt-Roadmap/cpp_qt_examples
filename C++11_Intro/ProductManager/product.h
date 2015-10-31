#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
public:
    Product();
    Product(std::string name, int price);

    std::string name() const;
    int price() const;

private:
    std::string _name;
    int _price;

};


#endif // PRODUCT_H
