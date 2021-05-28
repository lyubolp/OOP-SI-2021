//
// Created by lyubo on 27.05.21 г..
//
#include <vector>

class Shape {
public:
    virtual unsigned get_area() const = 0;
};
class Rectangle: virtual public Shape {
public:
    Rectangle(const unsigned width = 0, const unsigned height = 0): width(width), height(height) {}

    unsigned get_width() const {
        return this->width;
    }

    unsigned get_height() const {
        return this->height;
    }

    unsigned get_area() const override {
        return this->height * this->width;
    }

    virtual ~Rectangle() = default;
private:
    unsigned width;
    unsigned height;
};


class Circle: public Shape {
public:
    Circle(const unsigned& radius): radius(radius) {};

    unsigned get_radius() const {
        return this->radius;
    }

    unsigned get_area() const override {
        return this->radius * 3.14 * 2;
    }
private:
    unsigned radius;
};
class AreaCalculator{
public:
    static unsigned calculate_areas(const std::vector<Rectangle>& shapes) {
        unsigned result = 0;
        for(const auto& shape: shapes) {
            result += shape.get_width() * shape.get_height();
        }
    }

};

class CircleAreaCalculator: public AreaCalculator{
public:
    static unsigned calculate_areas(const std::vector<Circle>& shapes) {
        unsigned result = 0;
        for(const auto& shape: shapes) {
            result += 2 * shape.get_radius() * 3.14;
        }
    }
};


