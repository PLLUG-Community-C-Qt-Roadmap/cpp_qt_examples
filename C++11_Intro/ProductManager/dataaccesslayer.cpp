#include "dataaccesslayer.h"

DataAccessLayer::DataAccessLayer(const std::string &fileName)
{
    _dataReader.open(fileName);
}

std::vector<Product> DataAccessLayer::readProducts(ProdPred pred)
{
    int n;
    std::vector<Product> result;
    _dataReader >> n;
    std::string name;
    int price;

    if( !pred )
        pred = [](Product) { return true; };

    for(int i = 0; i < n; ++i)
    {
        _dataReader >> name >> price;
        Product product(name, price);
        if( pred(product) )
            result.push_back(product);
    }
    return result;
}

