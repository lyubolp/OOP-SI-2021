//
// Created by lyubo on 12.05.21 г..
//

#ifndef CODE_PROTECTEDVALUE_HPP
#define CODE_PROTECTEDVALUE_HPP

#include <iostream>
#include <exception>


template <class T>
class ProtectedValue {
public:
    ProtectedValue(const T& value = T(), const unsigned code = 0);
    T get_value(const unsigned code) const;
private:
    T value;
    unsigned code;
};

template <class T>
ProtectedValue<T>::ProtectedValue(const T& value, const unsigned code): value(value), code(code) {}

template <class T>
T ProtectedValue<T>::get_value(const unsigned code) const {
    if (code == this->code) {
        return this->value;
    }
    else {
        // return T(); <- Variant 1
        throw std::invalid_argument("Code does not match");
    }
}

#endif //CODE_PROTECTEDVALUE_HPP
