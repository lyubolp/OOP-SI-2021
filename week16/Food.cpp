//
// Created by lyubo on 11.06.21 г..
//

#include "Food.hpp"

Food::Food(const std::string& name, const std::string& code, const double& price, const unsigned calories): Item(name, code, price), calories(calories) {}

unsigned Food::get_calories() const {
    return this->calories;
}
Item* Food::clone() const {
    return new Food(*this);
}

std::string Food::to_string() const {
    return this->Item::to_string() + " " + std::to_string(this->calories);
};