//
// Created by lyubo on 17.03.21 г..
//

#include "Rational.hpp"

Rational::Rational(): numerator(0), denominator(1) {}
Rational::Rational(const int num, const int denom): numerator(num), denominator(denom) {}


Rational Rational::add(const Rational& other) const {
    Rational result;
    result.numerator = (this->numerator * other.denominator) + (other.numerator * this->denominator);
    result.denominator = this->denominator * other.denominator;
    return result;
}
Rational Rational::subtract(const Rational& other) const {
    Rational result;
    result.numerator = (this->numerator * other.denominator) - (other.numerator * this->denominator);
    result.denominator = this->denominator * other.denominator;
    return result;
}
Rational Rational::multiply(const Rational& other) const {
    Rational result;
    result.numerator = this->numerator * other.numerator;
    result.denominator = this->denominator * other.denominator;
    return result;
}
Rational Rational::divide(const Rational& other) const {
    Rational result;
    result.numerator = this->numerator * other.denominator;
    result.denominator = this->denominator * other.numerator;
    return result;
}

Rational Rational::operator+(const Rational& other) const{
    return this->add(other);
}

Rational Rational::operator-(const Rational& other) const {
    return this->subtract(other);
}

Rational Rational::operator*(const Rational& other) const {
    return this->multiply(other);
}

Rational Rational::operator/(const Rational& other) const {
    return this->divide(other);
}

double Rational::to_real() const {
    return (double)this->numerator / (double)this->denominator;
}
bool Rational::operator==(const Rational &other) const {
    double this_as_real = this->to_real();
    double other_as_real = other.to_real();

    return abs(this_as_real - other_as_real) < 0.00001; //Вариант 1
}

std::string Rational::to_string() const {
    return std::to_string(this->numerator) + "/" + std::to_string(this->denominator);
}