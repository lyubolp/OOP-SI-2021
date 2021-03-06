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

int main() {
    Point first = create_from_user_input();
    Point second = create_from_user_input();
    Point third = create_from_user_input();


    double a = distance_between_two_points(first, second);
    double b = distance_between_two_points(first, third);
    double c = distance_between_two_points(second, third);

    double p = (a + b + c) / 2;

    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}