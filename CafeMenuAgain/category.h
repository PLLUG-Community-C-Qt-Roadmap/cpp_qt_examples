#ifndef CATEGORY_H
#define CATEGORY_H

#include <vector>
#include <string>

class MenuItem;

class Category
{
public:
    Category(const std::string &name);

    void print();
    void addItem(MenuItem *item);
private:
    std::string mName;
    std::vector<MenuItem *> mItems;
    std::vector<Category *> mCategoryItems;
};


#endif // CATEGORY_H
