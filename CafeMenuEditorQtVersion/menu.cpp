#include "menu.h"
#include "menuvisitor.h"

/*!
 * \brief Menu::Menu constructor
 * \param pTitle is menu title
 */
Menu::Menu(const QString &pTitle)
    : Composite(pTitle)
{
}

/*!
 * \brief Menu::accept
 * \param visitor
 */
void Menu::accept(MenuVisitor *visitor)
{
    if(visitor)
    {
        visitor->visit(this);
    }
}

