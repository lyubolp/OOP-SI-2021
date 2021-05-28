
// Created by lyubo on 27.05.21 г..
//
#include <iostream>
class Printable{
public:
    virtual void print() = 0;
};
class Scannable {
public:
    virtual void scan() = 0;
};


class Printer: public Printable{
public:
    void print() {
        std::cout << "Print !" << std::endl;
    }

    void scan() {
        std::cout << "Not supported !" << std::endl;
    }
};