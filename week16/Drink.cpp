//
// Created by lyubo on 11.06.21 г..
//

#include "Drink.hpp"

Drink::Drink(const std::string& name, const std::string& code, const double& price, const double& alcohol): Item(name, code, price), alcohol(alcohol) {}

double Drink::get_alcohol() const {
    return this->alcohol;
}
Item* Drink::clone() const {
    return new Drink(*this);
}

std::string Drink::to_string() const {
    return this->Item::to_string() + " " + std::to_string(this->alcohol);
}