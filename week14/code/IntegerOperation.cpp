//
// Created by lyubo on 28.05.21 г..
//

#include "IntegerOperation.hpp"

IntegerOperation::IntegerOperation(): size(0), numbers(nullptr), result(0) {}
IntegerOperation::IntegerOperation(const IntegerOperation& from) {
    this->copy_object(from);
}
IntegerOperation& IntegerOperation::operator=(const IntegerOperation& from) {
    if(this != &from) {
        this->clear();
        this->copy_object(from);
    }
    return *this;
}
IntegerOperation::~IntegerOperation() {
    this->clear();
}

//TODO - Make this methods more generic
void IntegerOperation::sum() {
    this->result = 0;
    for(int i = 0; i < this->size; i++) {
        this->result += this->numbers[i];
    }
}
void IntegerOperation::sub() {
    this->result = 0;
    for(int i = 0; i < this->size; i++) {
        this->result -= this->numbers[i];
    }
}
void IntegerOperation::multiply() {
    this->result = 1;
    for(int i = 0; i < this->size; i++) {
        this->result *= this->numbers[i];
    }
}

void IntegerOperation::insert(const int number) {
    this->resize();
    this->numbers[this->size] = number;
    this->size += 1;
}

int IntegerOperation::get_result() const {
    return this->result;
}

int IntegerOperation::operator+(IntegerOperation& second) {
    this->sum();
    second.sum();

    return this->result + second.result;
}
int IntegerOperation::operator-(IntegerOperation& second) {
    this->sub();
    second.sub();

    return this->result - second.result;
}
int IntegerOperation::operator*(IntegerOperation& second) {
    this->multiply();
    second.multiply();

    return this->result * second.result;
}

void IntegerOperation::resize() {
    int* new_memory = new int[this->size + 1];
    IntegerOperation::copy_memory(new_memory, this->numbers, this->size);
    this->clear();
    this->numbers = new_memory;
}

void IntegerOperation::clear() {
    delete[] this->numbers;
}

void IntegerOperation::copy_memory(int* destination, const int* source, const int size) {
    for(int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

void IntegerOperation::copy_object(const IntegerOperation &from) {
    this->numbers = new int[from.size];
    IntegerOperation::copy_memory(this->numbers, from.numbers, from.size);
    this->size = from.size;
    this->result = from.result;
}