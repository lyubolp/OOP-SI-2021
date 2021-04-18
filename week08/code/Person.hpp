//
// Created by lyubo on 16.04.21 г..
//

#ifndef WEEK08_PERSON_HPP
#define WEEK08_PERSON_HPP

#include <string>
#include "Address.hpp"

class Person {
public:
    Person();
    Person(const std::pair<const std::string&, const std::string&>& name,
           const unsigned age, const Address& address);
    Person(const std::pair<const std::string&, const std::string&>& name,
           const unsigned age, const std::pair<const std::string&, const std::string&>& address);

    std::string get_first_name() const;
    std::string get_last_name() const;
    unsigned get_age() const;

    Address get_address() const;
private:
    std::string first_name;
    std::string last_name;

    unsigned age;

    Address address;
};


#endif //WEEK08_PERSON_HPP
