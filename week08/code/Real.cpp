//
// Created by lyubo on 16.04.21 г..
//

#include "Real.hpp"

Real::Real(): value(0) {}

Real::Real(const int value): value(value) {}

int Real::get_value() const {
    return this->value;
}
void Real::set_value(const int value) {
    this->value = value;
}

// + => Real(3) + Real(5) = Real(8)

Real Real::operator+(const Real& other) const{
    return Real(this->value + other.value);
}
Real Real::operator-(const Real& other) const{
    return Real(this->value - other.value);
}
Real Real::operator*(const Real& other) const{
    return Real(this->value * other.value);
}
Real Real::operator/(const Real& other) const{
    return Real(this->value / other.value);
}

// += => Real(3) += Real(5)
Real& Real::operator+=(const Real& other) {
    this->value += other.value;
    return *this;
}
Real& Real::operator-=(const Real& other) {
    this->value -= other.value;
    return *this;
}
Real& Real::operator*=(const Real& other) {
    this->value *= other.value;
    return *this;
}
Real& Real::operator/=(const Real& other) {
    this->value /= other.value;
    return *this;
}