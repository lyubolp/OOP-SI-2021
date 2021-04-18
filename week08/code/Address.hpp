//
// Created by lyubo on 16.04.21 г..
//

#ifndef WEEK08_ADDRESS_HPP
#define WEEK08_ADDRESS_HPP

#include <string>
class Address {
public:
    Address() = default;
    Address(const std::string& city, const std::string& street);

    std::string get_city_name() const;
    std::string get_street_name() const;
private:
    std::string city_name;
    std::string street_name;
};


#endif //WEEK08_ADDRESS_HPP
