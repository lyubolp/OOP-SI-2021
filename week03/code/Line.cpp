//
// Created by lyubo on 11.03.21 г..
//

#include "Line.hpp"

Line::Line(): b(Point(1, 0)) {
}
Line::Line(const Point& a, const Point& b) {
    this->a = a;
    this->b = b;
}

double Line::length() const {
    return this->a.distance(this->b);
}