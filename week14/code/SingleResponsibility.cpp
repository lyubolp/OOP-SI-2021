//
// Created by lyubo on 27.05.21 г..
//
#include <iostream>
#include <iomanip>
#include <fstream>
class Rectangle {
public:
    Rectangle(const unsigned width = 0, const unsigned height = 0): width(width), height(height) {}

    unsigned get_width() const {
        return this->width;
    }

    unsigned get_height() const {
        return this->height;
    }

    void print_to_file() const {
        std::ofstream file("/tmp/rectangle.txt");

        if(file.is_open()) {
            file << "Width: " << this->width << std::endl;
            file << "Height: " << this->height << std::endl;
        }
        file.close();
    }

    void draw() const {
        for(int i = 0; i < width; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        for(int i = 1; i < height - 1; i++) {
            std::cout << "*" << std::setw(this->width - 1) << "*" << std::endl;
        }
        for(int i = 0; i < width; i++) {
            std::cout << "*";
        }
    }
private:
    unsigned width;
    unsigned height;
};

void draw(const Rectangle& to_draw) {

}
int main() {
    Rectangle a(6, 4);
    a.draw();
}