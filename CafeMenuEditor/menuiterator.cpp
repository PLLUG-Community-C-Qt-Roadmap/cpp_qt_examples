#include "menuiterator.h"
#include "composite.h"

/*!
 * \brief MenuIterator::MenuIterator constructor
 * \param container is menu item to iterate
 */
MenuIterator::MenuIterator(Composite *container)
{
    addChildrenForTraversal(container);
}

/*!
 * \brief MenuIterator::hasNext
 * \return true if next menu item is found, else - false
 */
bool MenuIterator::hasNext() const
{
    return !mItemsStack.empty();
}

/*!
 * \brief MenuIterator::next
 * \return next menu item
 */
Composite *MenuIterator::next()
{
    Composite *nextItem = mItemsStack.top();
    mItemsStack.pop();

    addChildrenForTraversal(nextItem);
    return nextItem;
}

/*!
 * \brief MenuIterator::addChildrenForTraversal
 * \param contaner is menu item to iterate
 */
void MenuIterator::addChildrenForTraversal(Composite *container)
{
    if (container)
    {
        for (int index = 0; index < container->subitemsCount(); ++index)
        {
            Composite *item = container->child(index);
            mItemsStack.push(item);
        }
    }
}
