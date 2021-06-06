//
// Created by lyubo on 2.06.21 г..
//

#include <iostream>
#include <stdexcept>
double division(const double& a, const double& b) {
    if (b == 0) {
        throw std::invalid_argument("b should be non-zero !");
    }
    return a / b;
}
int main() {
    double first = 0;
    std::cin >> first;

    double second = 0;
    std::cin >> second;
    try {
        std::cout << division(first, second) << std::endl;
    }
    catch(const std::invalid_argument& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }
    return 0;
}
