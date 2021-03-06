#include <iostream>
#include <cmath>

double distance_between_two_points(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;

    std::cout << "Please enter x1: " << std::endl;
    std::cin >> x1;

    std::cout << "Please enter y1: " << std::endl;
    std::cin >> y1;

    std::cout << "Please enter x2: " << std::endl;
    std::cin >> x2;

    std::cout << "Please enter y2: " << std::endl;
    std::cin >> y2;

    std::cout << "Please enter x3: " << std::endl;
    std::cin >> x3;

    std::cout << "Please enter y3: " << std::endl;
    std::cin >> y3;

    double a = distance_between_two_points(x1, y1, x2, y2);
    double b = distance_between_two_points(x1, y1, x3, y3);
    double c = distance_between_two_points(x2, y2, x3, y3);

    double p = (a + b + c) / 2;

    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}