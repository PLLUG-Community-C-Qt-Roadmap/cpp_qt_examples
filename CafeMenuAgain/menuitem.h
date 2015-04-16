#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

class MenuItem
{
public:
    MenuItem( double price, double amount,
              const std::string &name,
              const std::string &description);

    void print();

private:
    double mPrice;
    double mAmount; // kilos
    std::string mName;
    std::string mDescription;
};

#endif // MENUITEM_H
