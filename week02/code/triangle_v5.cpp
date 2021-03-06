#include <iostream>
#include <cmath>

// Енкапсулация
// Абстракция
// Наследяване
// Полиморфизъм

class Point {
public:
    Point() {
        this->x = 0;
        this->y = 0;
    }
    double distance_to(Point second) {
        return sqrt(pow(second.x - this->x, 2) + pow(second.y - this->y, 2));
    }

    void set_x(int new_x) {
        this->x = new_x;
    }

    void set_y(int new_y) {
        this->y = new_y;
    }

    double get_x() {
        return this->x;
    }

    double get_y() {
        return this->y;
    }
private:
    double x = 0;
    double y = 0;
};

/*class Triangle {
public:
    double get_perimeter() {
        return this->a + this->b + this->c;
    }

    double calculate_area() {
        double p = get_perimeter(target) / 2;
        return sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));
    }


private:
    double a = 0;
    double b = 0;
    double c = 0;
};*/


int main() {
    /*Point second;
    Point third;

    Triangle triangle = create_from_point(first, second, third);

    std::cout << "The area of the triangle is: " << triangle.calculate_area() << std::endl;*/

    Point first;
    first.set_x(5);
    first.set_y(4);

    std::cout << first.get_x();

    Point second;
    second.set_x(6);
    second.set_y(5);

    std::cout << first.distance_to(second) << std::endl;
    return 0;
}