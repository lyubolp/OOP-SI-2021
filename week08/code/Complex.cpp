//
// Created by lyubo on 16.04.21 г..
//

#include "Complex.hpp"

Complex::Complex(): Real(), complex_part(1) {}
Complex::Complex(const int real_part, const int complex_part): Real(real_part), complex_part(complex_part) {}

int Complex::get_complex_part() const {
    return this->complex_part;
}
int Complex::get_real_part() const {
    return Real::get_value();
}

void Complex::set_complex_part(const int complex_part) {
    this->complex_part = complex_part;
}
void Complex::set_real_part(const int real_part) {
    Real::set_value(real_part);
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(this->value + other.value, this->complex_part + other.complex_part);
}
Complex Complex::operator-(const Complex& other) const {
    return Complex(this->value - other.value, this->complex_part - other.complex_part);
}
Complex Complex::operator*(const Complex& other) const {
    //TODO
    return Complex();
}
Complex Complex::operator/(const Complex& other) const {
    //TODO
    return Complex();
}


Complex& Complex::operator+=(const Complex& other) {
    this->value += other.value;
    this->complex_part += other.complex_part;
    return *this;
}
Complex& Complex::operator-=(const Complex& other) {
    this->value -= other.value;
    this->complex_part -= other.complex_part;
    return *this;
}
Complex& Complex::operator*=(const Complex& other) {
    //TODO
    return *this;
}
Complex& Complex::operator/=(const Complex& other) {
    //TODO
    return *this;
}