//
// Created by lyubo on 16.04.21 г..
//

#ifndef WEEK08_REAL_HPP
#define WEEK08_REAL_HPP


class Real {
public:
    Real();
    Real(const int value);

    int get_value() const;
    void set_value(const int value);

    // + => Real(3) + Real(5)
    Real operator+(const Real& other) const;
    Real operator-(const Real& other) const;
    Real operator*(const Real& other) const;
    Real operator/(const Real& other) const;

    // += => Real(3) += Real(5)
    Real& operator+=(const Real& other);
    Real& operator-=(const Real& other);
    Real& operator*=(const Real& other);
    Real& operator/=(const Real& other);

protected:
    int value;
};


#endif //WEEK08_REAL_HPP
