#include <iostream>
#include <cmath>
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

    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    double p = (a + b + c) / 2;

    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}