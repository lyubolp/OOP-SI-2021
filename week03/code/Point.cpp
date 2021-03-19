//
// Created by lyubo on 11.03.21 г..
//

#include "Point.hpp"

Point::Point(): x(0), y(0) {
    //this->x = 0;
    //this->y = 0;
}
Point::Point(const int x, const int y) {
    this->x = x;
    this->y = y;
}

int Point::get_x() const {
    return this->x;
}
int Point::get_y() const {
    return this->y;
}

double Point::distance(const Point& to) const{
    return sqrt(pow(this->x - to.x, 2) + pow(this->y - to.y, 2));
}