//
// Created by lyubo on 9.06.21 г..
//

#ifndef WEEK16_PERSON_HPP
#define WEEK16_PERSON_HPP

#include <string>

class Person {
public:
    Person();

    Person& with_first_name(const std::string& first_name);
    Person& with_last_name(const std::string& last_name);
    Person& with_age(const unsigned age);

    std::string get_first_name() const;
    std::string get_last_name() const;
    unsigned get_age() const;

    virtual std::string to_string() const;
    virtual Person* clone() const = 0;
    virtual ~Person() = default;
private:
    std::string first_name;
    std::string last_name;
    unsigned age;
};


#endif //WEEK16_PERSON_HPP
