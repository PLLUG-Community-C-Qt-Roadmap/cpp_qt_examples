#include "menuitem.h"
#include "menuvisitor.h"

#include <iostream>

/*!
 * \brief MenuItem::MenuItem constructor
 * \param pTitle is menu item title
 * \param pPrice is menu item price
 * \param pDescription is menu item description
 */
MenuItem::MenuItem(const std::string &pTitle, double pPrice, std::string pDescription)
    : Composite(pTitle),
      mPrice(pPrice),
      mDescription(pDescription)
{
}

/*!
 * \brief MenuItem::description
 * \return description of this menu item
 */
std::string MenuItem::description() const
{
    return mDescription;
}

/*!
 * \brief MenuItem::price
 * \return price of this menu item
 */
double MenuItem::price() const
{
    return mPrice;
}

/*!
 * \brief MenuItem::accept
 * \param visitor
 */
void MenuItem::accept(MenuVisitor *visitor)
{
    visitor->visit(this);
}
