//
// Created by lyubo on 9.06.21 г..
//

#ifndef WEEK16_MANAGER_HPP
#define WEEK16_MANAGER_HPP

#include "Person.hpp"
#include "Worker.hpp"

#include <vector>
class Manager: public Person {
public:
    Manager() = default;

    std::vector<Worker> get_workers() const;
    void add_worker(const Worker& worker);
    Person* clone() const;
private:
    std::vector<Worker> workers;
};


#endif //WEEK16_MANAGER_HPP
