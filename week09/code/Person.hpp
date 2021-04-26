//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_PERSON_HPP
#define CODE_PERSON_HPP

#include <string>
class Person {
public:
    Person() = default;
    Person(const std::string& first_name, const std::string& last_name);

    std::string get_first_name() const;
    std::string get_last_name() const;

protected:
    std::string first_name;
    std::string last_name;
};


#endif //CODE_PERSON_HPP
