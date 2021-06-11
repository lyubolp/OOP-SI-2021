//
// Created by lyubo on 9.06.21 г..
//

#ifndef WEEK16_FIRM_HPP
#define WEEK16_FIRM_HPP

#include <vector>
#include "Person.hpp"
#include <stdexcept>

class Firm {
public:
    Firm() = default;
    Firm(const Firm& from);
    Firm& operator=(const Firm& from);
    ~Firm();

    Person* operator[](const int index) const;
    void add(const Person* person);
private:
    void clear_memory();
    static std::vector<Person*> copy_vector(const std::vector<Person*> from);
    std::vector<Person*> people;
};


#endif //WEEK16_FIRM_HPP
