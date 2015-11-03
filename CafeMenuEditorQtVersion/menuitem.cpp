#include "menuitem.h"
#include "menuvisitor.h"

/*!
 * \brief MenuItem::MenuItem constructor
 * \param pTitle is menu item title
 * \param pPrice is menu item price
 * \param pDescription is menu item description
 */
MenuItem::MenuItem(const QString &pTitle, double pPrice, QString pDescription)
    : Composite(pTitle),
      mPrice(pPrice),
      mDescription(pDescription)
{
}

/*!
 * \brief MenuItem::description
 * \return description of this menu item
 */
QString MenuItem::description() const
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
    if(visitor)
    {
        visitor->visit(this);
    }
}
