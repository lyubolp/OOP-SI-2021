//
// Created by lyubo on 24.03.21 г..
//

#ifndef WEEK05_STATICEXAMPLE_HPP
#define WEEK05_STATICEXAMPLE_HPP

#include <iostream>

class StaticExample {
public:
    static int counter;

    StaticExample();
    int some_value;

    static void print_amount_of_instances();
    void print() const;
};



#endif //WEEK05_STATICEXAMPLE_HPP
