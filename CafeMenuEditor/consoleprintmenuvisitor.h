#ifndef CONSOLEPRINTMENUVISITOR_H
#define CONSOLEPRINTMENUVISITOR_H

#include "menuvisitor.h"
#include <string>

class Composite;
/*!
 * \brief The ConsolePrintMenuVisitor class
 */
class ConsolePrintMenuVisitor : public MenuVisitor
{
public:
    void visit(MenuItem *item);
    void visit(Menu *menu);

private:
    std::string indent(Composite *item) const;
};

#endif // CONSOLEPRINTMENUVISITOR_H
