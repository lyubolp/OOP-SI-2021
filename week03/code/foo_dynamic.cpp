//
// Created by lyubo on 10.03.21 г..
//

#include "foo_dynamic.hpp"

foo_dynamic::foo_dynamic() {
    this->some_value = new int(0);
}

foo_dynamic::foo_dynamic(const foo_dynamic &from) {
    //this->some_value = new int(*from.some_value);

    this->some_value = new int(from.get_value());

    /*this->some_value = new int;
    this->set_value(from.get_value());*/
}
void foo_dynamic::set_value(const int new_value) {
    *(this->some_value) = new_value;
}
int foo_dynamic::get_value() const {
    return *(this->some_value);
}