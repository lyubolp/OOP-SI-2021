//
// Created by lyubo on 16.04.21 г..
//

#include "Person.hpp"

Person::Person(): age(0) {}

Person::Person(const std::pair<const std::string&, const std::string&>& name,
       const unsigned age, const Address& address){
    this->first_name = name.first;
    this->last_name = name.second;
    this->age = age;
    this->address = address;
}
Person::Person(const std::pair<const std::string&, const std::string&>& name,
       const unsigned age, const std::pair<const std::string&, const std::string&>& address) {
    this->first_name = name.first;
    this->last_name = name.second;
    this->age = age;
    this->address = Address(address.first, address.second);
}

std::string Person::get_first_name() const {
    return this->first_name;
}
std::string Person::get_last_name() const {
    return this->last_name;
}
unsigned Person::get_age() const {
    return this->age;
}

Address Person::get_address() const {
    return this->address;
}