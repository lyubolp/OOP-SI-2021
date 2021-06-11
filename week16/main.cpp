#include <iostream>
#include <vector>

#include "Firm.hpp"
#include "Worker.hpp"
#include "Manager.hpp"

#include "UniqueBox.hpp"

//class Shape{
//public:
//    virtual int get_perimeter() const = 0;
//};
//
//class Rectangle: public Shape{
//public:
//    Rectangle(const int a, const int b): a(a), b(b) {}
//    int get_perimeter() const override {
//        return 2 * (this->a + this->b);
//    }
//private:
//    int a;
//    int b;
//};
//
//class Triangle: public Shape {
//public:
//    Triangle(const int a, const int b, const int c): a(a), b(b), c(c) {}
//    int get_perimeter() const override{
//        return this->a + this->b + this->c;
//    }
//private:
//    int a;
//    int b;
//    int c;
//};

int main() {
//    Shape* a = new Rectangle(5, 4);
//    Shape* b = new Triangle(3, 4, 5);
//
//    std::vector<Shape*> shapes = {a, b};
//
//    for(const Shape* shape: shapes) {
//        std::cout << shape->get_perimeter() << std::endl;
//    }

    /*Worker first;
    first.with_first_name("Lyubo").with_last_name("Karev").with_age(22);
    first.with_salary(250);

    Worker second;
    second.with_first_name("Lyubo").with_last_name("Karev 2").with_age(222);
    second.with_salary(2250);

    Manager third;
    third.with_first_name("Lyubo").with_last_name("Karev 3").with_age(222);
    third.add_worker(first);
    third.add_worker(second);

    Firm firm;
    firm.add(&first);
    firm.add(&second);
    firm.add(&third);

    for(int i = 0; i < 3; i++) {
        std::cout << firm[i]->to_string() << std::endl;
    }*/

    UniqueBox<int> container;
    container += 3;
    container += 5;
    std::cout << container.count() << std::endl;
    container += 6;
    container += 3;
    std::cout << container.count() << std::endl;
    std::cout << container[1] << std::endl;

    return 0;


    return 0;
}
