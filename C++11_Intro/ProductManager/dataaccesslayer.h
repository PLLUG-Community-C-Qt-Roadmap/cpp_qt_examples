#ifndef DATAACCESSLAYER_H
#define DATAACCESSLAYER_H

#include "product.h"

#include <vector>
#include <functional>
#include <fstream>


class DataAccessLayer
{
public:
    typedef std::function<bool(Product)> ProdPred;
    DataAccessLayer(const std::string &fileName);

    std::vector<Product> readProducts(
            ProdPred pred = ProdPred()
            );

private:
    std::ifstream _dataReader;
};

#endif // DATAACCESSLAYER_H
