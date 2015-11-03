#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <memory>
#include <QString>
#include <QVector>

class MenuVisitor;

/*!
 * \brief The Composite basic class that realise compositor patern for cafe menu.
 */
class Composite
{
public:
    Composite(const QString &pTitle, Composite *parent = nullptr);
    virtual ~Composite();

    void addSubitem(Composite *pItem);
    int subitemsCount() const;
    Composite *child(int pIndex) const;
    Composite *parent() const;

    QString title() const;

    virtual void accept(MenuVisitor *visitor) = 0;

private:
    QString mTitle;
    Composite* mParent;
    QVector<Composite*> mListSubitems;
};

#endif // COMPOSITE_H
