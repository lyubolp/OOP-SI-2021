//
// Created by lyubo on 11.03.21 г..
//

#ifndef CODE_LINE_HPP
#define CODE_LINE_HPP

/*
 * Даден е клас Line, описан от две точки.
 * Напишете конструктор по подразбиране (създава се линия с дължина 1) и конструктор с параметри.
 * Напишете метод за намиране на дължината на линията.
 */
#include "Point.hpp"

class Line {
public:
    Line();
    Line(const Point& a, const Point& b);

    double length() const;
private:
    Point a;
    Point b;
};


#endif //CODE_LINE_HPP
