#ifndef MENUVISITOR_H
#define MENUVISITOR_H

class MenuItem;
class Menu;

/*!
 * \brief The MenuVisitor class
 */
class MenuVisitor
{
public:
    virtual void visit(MenuItem *) = 0;
    virtual void visit(Menu *) = 0;
};

#endif // MENUVISITOR_H
