#include "productlistmodel.h"

ProductListModel::ProductListModel(QObject *parent) : QAbstractListModel(parent)
{

}

void ProductListModel::ResetModel(std::vector<Product> products)
{
    beginResetModel();
    _data = products;
    endResetModel();
}

void ProductListModel::insertProduct(int index, Product product)
{
    auto where = _data.begin();
    std::advance(where, index);

    beginInsertRows(QModelIndex(), index, index + 1);
    _data.insert(where, product);
    endInsertRows();
}

Product ProductListModel::removeProduct(int index)
{

    Product rValue;
    if( index >= 0 && index < _data.size() )
    {
        rValue = _data[index];

        beginRemoveRows(QModelIndex(), index, index + 1);
        _data.erase(_data.begin() + index);
        endRemoveRows();
    }

    return rValue;

}

Product ProductListModel::getProduct(int index)
{
    if( index >= 0 && index < _data.size() )
        return _data[index];
    return Product();
}

int ProductListModel::rowCount(const QModelIndex &parent) const
{
    return _data.size();
}

QVariant ProductListModel::data(const QModelIndex &index, int role) const
{
    if(role != Qt::DisplayRole)
        return QVariant();

    if( index.row() < 0 || index.row() >= _data.size() )
        return QVariant();

    Columns column = static_cast<Columns>(index.column());

    switch(column)
    {
        case Columns::Name:
            return QVariant(_data[index.row()].name().c_str()); break;
        case Columns::Price:
            return QVariant(_data[index.row()].price()); break;
        default:
            return QVariant();
    }
}


int ProductListModel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

QVariant ProductListModel::headerData(int section, Qt::Orientation orientation, int role) const
{

    if( role != Qt::DisplayRole )
        return QVariant();

    if(orientation == Qt::Vertical)
        return QVariant();

    if(section == 0)
        return QVariant("Name");
    else if( section == 1)
        return QVariant("Price");
    else
        return QVariant();

}
