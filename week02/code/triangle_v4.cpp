#include <iostream>
#include <cmath>

struct Point {
    double x = 0;
    double y = 0;
};

Point create(double x, double y) {
    Point result;
    result.x = x;
    result.y = y;

    return result;
}

Point create_from_user_input() {
    double x = 0, y = 0;
    std::cout << "Please enter point's x: " << std::endl;
    std::cin >> x;

    std::cout << "Please enter point's y: " << std::endl;
    std::cin >> y;

    return create(x, y);
}

double distance_between_two_points(Point first, Point second) {
    return sqrt(pow(second.x - first.x, 2) + pow(second.y - first.y, 2));
}
struct Triangle {
    double a = 0;
    double b = 0;
    double c = 0;
};

double get_perimeter(Triangle target) {
    return target.a + target.b + target.c;
}

double calculate_area(Triangle target) {
    double p = get_perimeter(target) / 2;

    return sqrt(p * (p - target.a) * (p - target.b) * (p - target.c));
}

Triangle create_from_point(Point first, Point second, Point third) {
    Triangle result;
    result.a = distance_between_two_points(first, second);
    result.b = distance_between_two_points(first, third);
    result.c = distance_between_two_points(second, third);

    return result;
}


int main() {
    Point first = create_from_user_input();
    Point second = create_from_user_input();
    Point third = create_from_user_input();

    Triangle triangle = create_from_point(first, second, third);
    triangle.a = -1;

    std::cout << "The area of the triangle is: " << calculate_area(triangle) << std::endl;

    return 0;
}