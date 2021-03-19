//
// Created by lyubo on 11.03.21 г..
//

#ifndef CODE_POINT_HPP
#define CODE_POINT_HPP

/*
 * Даден е клас Point, описващ точка в двумерното пространство.
 * Напишете конструктор по подразбиране и конструктор с параметри.
 * Напишете методи, за връщане на координатите на точката.
 * Напишете метод, който връща разстоянието между две точки.
 */

#include <cmath>

class Point {
public:
    Point();
    Point(const int x, const int y);

    int get_x() const;
    int get_y() const;

    double distance(const Point& to) const;
private:
    int x;
    int y;
};


#endif //CODE_POINT_HPP
