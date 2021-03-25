//
// Created by lyubo on 24.03.21 г..
//

#include "StaticExample.hpp"

int StaticExample::counter = 0;

StaticExample::StaticExample() {
    StaticExample::counter += 1;
    this->some_value = 3;
}

void StaticExample::print() const {
    std::cout << "Amount of instances: " << StaticExample::counter << std::endl;
}

void StaticExample::print_amount_of_instances() {
    std::cout << "Amount of instances: " << StaticExample::counter << std::endl;
}