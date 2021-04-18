//
// Created by lyubo on 16.04.21 г..
//

#ifndef WEEK08_COMPLEX_HPP
#define WEEK08_COMPLEX_HPP

#include "Real.hpp"
class Complex: protected Real {
public:
    Complex();
    Complex(const int real_part, const int complex_part);

    int get_complex_part() const;
    int get_real_part() const;

    void set_complex_part(const int complex_part);
    void set_real_part(const int real_part);

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator/=(const Complex& other);
private:
    int complex_part;
};


#endif //WEEK08_COMPLEX_HPP
