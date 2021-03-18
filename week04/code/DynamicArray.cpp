//
// Created by lyubo on 17.03.21 г..
//

#include "DynamicArray.hpp"

DynamicArray::DynamicArray(): length(0), capacity(1) {
    this->content = new int[this->capacity];
}
DynamicArray::DynamicArray(const DynamicArray& from): length(from.length), capacity(from.capacity) {
    this->content = new int[this->capacity];

    for(int i = 0; i < this->length; i++) {
        this->content[i] = from.content[i];
    }
}

DynamicArray& DynamicArray::operator=(const DynamicArray& from) {
    if (this != &from) {
        this->length = from.length;
        this->capacity = from.capacity;

        delete[] this->content;
        this->content = new int[this->capacity];

        for(int i = 0; i < this->length; i++) {
            this->content[i] = from.content[i];
        }
    }
    return *this;
}

DynamicArray::~DynamicArray() {
    delete[] this->content;
}

void DynamicArray::append(const int item) {
    if (this->length == this->capacity) {
        this->capacity *= 2;

        int* new_content = new int[this->capacity];

        for(int i = 0; i < this->length; i++) {
            new_content[i] = this->content[i];
        }
        delete[] this->content;
        this->content = new_content;
    }
    this->content[this->length] = item;
    this->length += 1;
}
int DynamicArray::get(const int index) const {
    if (0 <= index && index < this->length) {
        return this->content[index];
    }
    return -1;
}
int DynamicArray::get_length() const {
    return this->length;
}

int DynamicArray::operator[](const int index) {
    return this->get(index);
}