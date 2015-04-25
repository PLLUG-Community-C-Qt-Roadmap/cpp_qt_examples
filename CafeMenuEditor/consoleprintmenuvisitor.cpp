#include "consoleprintmenuvisitor.h"
#include "menuitem.h"
#include "menu.h"

#include <iostream>

/*!
 * \brief ConsolePrintMenuVisitor::indent
 * \param item
 * \return
 */
std::string ConsolePrintMenuVisitor::indent(Composite *item) const
{
    std::string rIndentString;

    std::string lIndentStep = "    ";
    Composite *lMenuItem = item->parent();
    while (lMenuItem)
    {
        lMenuItem = lMenuItem->parent();
        rIndentString.append(lIndentStep);
    }

    return rIndentString;
}

/*!
 * \brief ConsolePrintMenuVisitor::visit
 * \param item
 */
void ConsolePrintMenuVisitor::visit(MenuItem *item)
{
    std::string lIndentString = indent(item);

    std::cout << lIndentString << "> " << item->title() << "    :        " << item->price() << "$" << std::endl;

    if (!item->description().empty())
    {
        std::cout << lIndentString << "    ::::" << item->description() << "::::" << std::endl;
    }
}

/*!
 * \brief ConsolePrintMenuVisitor::visit
 * \param menu
 */
void ConsolePrintMenuVisitor::visit(Menu *menu)
{
    std::cout << indent(menu) << "[" << menu->title() << "]" << std::endl;
}
