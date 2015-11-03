#include <QTextStream>

#include "menu.h"
#include "menuitem.h"
#include "consoleprintmenuvisitor.h"

const QString cIndentStep {"    "};
const QString cMenuTitle {"%1[%2]\n"};
const QString cMenuItemMainInfo {"%1> %2    :        %3$\n"};
const QString cMenuItemDescription {"%1    ::::%2::::\n"};

/*!
 * \brief ConsolePrintMenuVisitor::indent
 * \param item
 * \return
 */
QString ConsolePrintMenuVisitor::indent(Composite *item) const
{
    QString rIndentString{};
    if(item)
    {
        auto lMenuItem = item->parent();
        while (lMenuItem)
        {
            lMenuItem = lMenuItem->parent();
            rIndentString.append(cIndentStep);
        }
    }
    return rIndentString;
}

/*!
 * \brief ConsolePrintMenuVisitor::visit
 * \param item
 */
void ConsolePrintMenuVisitor::visit(MenuItem *item)
{
    QString lIndentString {std::move(indent(item))};
    if(item)
    {
        QTextStream cout{stdout};
        cout << cMenuItemMainInfo.arg(lIndentString).arg(item->title()).arg(item->price());

        if (!item->description().isEmpty())
        {
            cout << cMenuItemDescription.arg(lIndentString).arg(item->description());
        }
    }
}

/*!
 * \brief ConsolePrintMenuVisitor::visit
 * \param menu
 */
void ConsolePrintMenuVisitor::visit(Menu *menu)
{
    QTextStream cout{stdout};
    cout << cMenuTitle.arg(indent(menu)).arg(menu->title());
}
