//
// Created by lyubo on 9.06.21 г..
//

#ifndef WEEK16_WORKER_HPP
#define WEEK16_WORKER_HPP
#include "Person.hpp"

class Worker: public Person{
public:
    Worker();
    Worker& with_salary(const unsigned salary);

    unsigned get_salary() const;
    std::string to_string() const override;
    Person* clone() const;

private:
    unsigned salary;
};


#endif //WEEK16_WORKER_HPP
