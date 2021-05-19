#include <iostream>
#include <cmath>
#include <vector>

class Shape {
public:

    enum class Type{
        RECTANGLE,
        TRIANGLE,
        CIRCLE
    };

    Shape() = default;

    virtual double get_area() const = 0;
    virtual Shape* clone() const = 0;
    virtual Type get_type() const = 0;

    virtual ~Shape() = default;
};


class Rectangle: public Shape {
public:
    Rectangle() = default;
    Rectangle(const double& width, const double& height): width(width), height(height) {}

    double get_width() const {
        return this->width;
    }

    double get_height() const {
        return this->height;
    }
    double get_area() const override{
        return this->width * height;
    }

    Shape* clone() const override{
        return new Rectangle(*this);
    }

    Type get_type() const override {
        return Type::RECTANGLE;
    }
private:
    double width;
    double height;
};

class Triangle: public Shape {
public:
    Triangle() = default;
    Triangle(const double& a, const double& b, const double& c): a(a), b(b), c(c) {}

    double get_a() const {
        return this->a;
    }

    double get_b() const {
        return this->b;
    }

    double get_c() const {
        return this->c;
    }

    double get_area() const override {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    Shape* clone() const override{
        return new Triangle(*this);
    }

    Type get_type() const override {
        return Type::TRIANGLE;
    }
private:
    double a;
    double b;
    double c;
};


class Circle: public Shape{
public:
    const double PI = 3.14;
    Circle(const double& radius = 0): radius(radius) {}

    double get_radius() const {
        return this->radius;
    }
    double get_area() const override {
        return PI * radius * radius;
    }

    Shape* clone() const override{
        return new Circle(*this);
    }

    Type get_type() const override {
        return Type::CIRCLE;
    }
private:
    double radius;
};

class Shapes{
public:
    Shapes() = default;


    void add(const Shape* const shape) {
        this->shapes.push_back(shape->clone());
    }

    Shape* operator[](const int index) const {
        return this->shapes[index];
    }

    unsigned size() const {
        return this->shapes.size();
    }

    ~Shapes() {
        for(auto* shape: shapes) {
            delete shape;
        }
    }
private:
    std::vector<Shape*> shapes;
};

int main() {
    Shapes shapes;

    Rectangle rectangle(3, 5);
    shapes.add(&rectangle);

    Triangle triangle(3, 4, 5);
    shapes.add(&triangle);

    Circle circle(5);
    shapes.add(&circle);

    for(int i = 0; i < shapes.size(); i++) {
        if (shapes[i]->get_type() == Shape::Type::RECTANGLE) {
            std::cout << "This rectangle's area is: ";
        }
        else if (shapes[i]->get_type() == Shape::Type::TRIANGLE) {
            std::cout << "This triangle's area is: ";

            Triangle* as_triangle = (Triangle*)shapes[i];
            std::cout << as_triangle->get_a();
        }
        else if (shapes[i]->get_type() == Shape::Type::CIRCLE) {
            std::cout << "This circle's area is: ";
        }
        std::cout << shapes[i]->get_area() << std::endl;
    }

    return 0;
}
