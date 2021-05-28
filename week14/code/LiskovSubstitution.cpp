//
// Created by lyubo on 27.05.21 г..
//
#include <vector>

class Rectangle {
public:
    Rectangle(const unsigned width = 0, const unsigned height = 0): width(width), height(height) {}

    unsigned get_width() const {
        return this->width;
    }

    unsigned get_height() const {
        return this->height;
    }
private:
    unsigned width;
    unsigned height;
};

class Square{

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
