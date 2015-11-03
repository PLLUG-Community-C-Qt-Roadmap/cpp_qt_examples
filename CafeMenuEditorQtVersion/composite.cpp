#include "composite.h"
#include "menuvisitor.h"

/*!
 * \brief Composite::Composite constructor
 * \param pTitle is item's title.
 */
Composite::Composite(const QString &pTitle, Composite *parent):
    mTitle{pTitle},
    mParent{parent}
{
}

/*!
 * \brief Composite::~Composite destructor
 */
Composite::~Composite()
{
    qDeleteAll(mListSubitems);
    mListSubitems.clear();
}

/*!
 * \brief Composite::addSubitem
 * \param pItem is new child subitem for this item
 */
void Composite::addSubitem(Composite *pItem)
{
    if (this != pItem)
    {
        mListSubitems.push_back(pItem);
        pItem->mParent = this;
    }
}

/*!
 * \brief Composite::subitemsCount
 * \return number of item's childs
 */
int Composite::subitemsCount() const
{
    return mListSubitems.size();
}

/*!
 * \brief Composite::child
 * \param pIndex is index of child item
 * \return child by index
 */
Composite *Composite::child(int pIndex) const
{
    return mListSubitems.value(pIndex);
}

/*!
 * \brief Composite::parent
 * \return parent of this item
 */
Composite *Composite::parent() const
{
    return mParent;
}

/*!
 * \brief Composite::title
 * \return title of this item
 */
QString Composite::title() const
{
    return mTitle;
}
