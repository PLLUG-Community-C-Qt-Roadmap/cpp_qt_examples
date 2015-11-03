#ifndef CONSOLEPRINTMENUVISITOR_H
#define CONSOLEPRINTMENUVISITOR_H

#include "menuvisitor.h"
#include <QString>

class Composite;
class QTextStream;
/*!
 * \brief The ConsolePrintMenuVisitor class
 */
class ConsolePrintMenuVisitor : public MenuVisitor
{
public:
    void visit(MenuItem *item);
    void visit(Menu *menu);

private:
    QString indent(Composite *item) const;
};

#endif // CONSOLEPRINTMENUVISITOR_H
