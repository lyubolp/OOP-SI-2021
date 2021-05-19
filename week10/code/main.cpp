#include <iostream>
#include <fstream>

class Foo{
public:
    Foo() = default;

    friend std::istream& operator>>(std::istream& in, Foo& object);
    friend std::ostream& operator<<(std::ostream& out, const Foo& object);
private:
    int first;
    int second;
    int third;
};

std::istream& operator>>(std::istream& in, Foo& object) {
    in >> object.first >> object.second >> object.third;
    return in;
}


std::ostream& operator<<(std::ostream& out, const Foo& object) {
    out << object.first << " " << object.second << " " << object.third;
    return out;
}
int main() {

    std::ifstream reader("random_text.txt");

    Foo instance;

    reader >> instance;

    std::cout << instance;

    return 0;
}
