#pragma once

#include <vector>
#include <string>
#include "Item.hpp"
#include <iostream>

class Shop {
public:
    Shop() = default;
    Shop(const Shop& from);
    Shop& operator=(const Shop& from);
    ~Shop();

    void add(const Item* item);
    void remove(const std::string& code);
    void list_by_price_lower(const double& target_price) const;

    Item* search_by_code(const std::string& code) const;
private:
    int get_index_of(const std::string& code) const;
    void clear_items();
    void copy_items(const Shop& from);
    std::vector<Item*> items;
};
