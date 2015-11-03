#ifndef MENUITEM_H
#define MENUITEM_H

#include "composite.h"

class MenuVisitor;

/*!
 * \brief The MenuItem class is main component, from which derive composites and leaves
 * and also class for menu item - leave of our hierarchy.
 */
class MenuItem : public Composite
{
public:

    MenuItem(const QString &pTitle, double pPrice = 0.0, QString pDescription = QString());

    QString description() const;
    double price() const;

    void accept(MenuVisitor *visitor);

private:
    double mPrice;
    QString mDescription;
};

#endif // MENUITEM_H
