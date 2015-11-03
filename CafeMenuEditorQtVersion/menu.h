#ifndef MENU_H
#define MENU_H

#include "composite.h"

class MenuVisitor;

/*!
 * \brief The Menu class is a composite class - menu of items and submenus
 */
class Menu : public Composite
{
public:
    Menu(const QString &pTitle);

    void accept(MenuVisitor *visitor);
};
#endif // MENU_H
