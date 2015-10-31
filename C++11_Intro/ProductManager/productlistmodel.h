#ifndef PRODUCTLISTMODEL_H
#define PRODUCTLISTMODEL_H

#include <QAbstractItemModel>

#include <vector>
#include "product.h"


class ProductListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ProductListModel(QObject *parent = 0);

    enum Columns { Name, Price };


    void ResetModel(std::vector<Product> products);
    void insertProduct(int index, Product product);

    Product removeProduct(int index);

    Product getProduct(int index);


private:
    std::vector<Product> _data;


    // QAbstractItemModel interface
public:
    virtual int rowCount(const QModelIndex &parent) const;
    virtual QVariant data(const QModelIndex &index, int role) const;

    // QAbstractItemModel interface
public:
    virtual int columnCount(const QModelIndex &parent) const;
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const;
};

#endif // PRODUCTLISTMODEL_H
