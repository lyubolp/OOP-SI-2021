//
// Created by lyubo on 11.06.21 г..
//

#include "Item.hpp"

Item::Item(const std::string& name, const std::string& code, const double& price): name(name), code(code), price(price) {}

std::string Item::get_name() const {
    return this->name;
}
std::string Item::get_code() const {
    return this->code;
}
double Item::get_price() const {
    return this->price;
}

std::string Item::to_string() const {
    return this->name + " " + this->code + " " + std::to_string(this->price);
}