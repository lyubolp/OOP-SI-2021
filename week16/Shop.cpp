//
// Created by lyubo on 11.06.21 г..
//

#include "Shop.hpp"

Shop::Shop(const Shop& from) {
    this->copy_items(from);
}
Shop& Shop::operator=(const Shop& from) {
    if (this != &from) {
        this->clear_items();
        this->copy_items(from);
    }

    return *this;
}
Shop::~Shop() {
    this->clear_items();
}

void Shop::add(const Item* item) {
    this->items.push_back(item->clone());
}
void Shop::remove(const std::string& code) {
    int target_index = this->get_index_of(code);

    if(target_index != -1) {
        delete this->items[target_index];
        this->items.erase(this->items.begin() + target_index);
    }
}
void Shop::list_by_price_lower(const double& target_price) const {
    for(const Item* item: this->items) {
        if(item->get_price() < target_price) {
            std::cout << item->to_string() << std::endl;
        }
    }
}

Item* Shop::search_by_code(const std::string& code) const {
    int target_index = this->get_index_of(code);

    if(target_index != -1) {
        return this->items[target_index];
    }
    return nullptr;
}

void Shop::clear_items() {
    for(auto* item: this->items) {
        delete item;
    }
    this->items.clear();
}

void Shop::copy_items(const Shop& from) {
    for(const auto* item: from.items) {
        this->items.push_back(item->clone());
    }
}

int Shop::get_index_of(const std::string& code) const {
    for(int i = 0; i < this->items.size(); i++) {
        if(this->items[i]->get_code() == code) {
            return i;
        }
    }
    return -1;
}