//
// Created by lyubo on 16.04.21 г..
//

#include "Address.hpp"

Address::Address(const std::string& city, const std::string& street): city_name(city), street_name(street) {}

std::string Address::get_city_name() const {
    return this->city_name;
}
std::string Address::get_street_name() const {
    return this->street_name;
}