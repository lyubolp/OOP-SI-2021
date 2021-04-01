//
// Created by lyubo on 17.03.21 г..
//

#ifndef CODE_DYNAMICARRAY_HPP
#define CODE_DYNAMICARRAY_HPP

#include <iostream>
#include <string>

inline std::string convert_to_string(int item) {
    return std::to_string(item);
}

inline std::string convert_to_string(std::string item) {
    return item;
}

inline std::string convert_to_string(double item) {
    return std::to_string(item);
}

template <typename T>

class DynamicArray {
public:
    DynamicArray();
    DynamicArray(const DynamicArray<T>& from);
    DynamicArray& operator=(const DynamicArray<T>& from);
    ~DynamicArray();

    void append(const T& item); //Change here
    T get(const int index) const; //Change here
    int get_length() const;

    T operator[](const int index); //Change here (return type)

    std::string print() const;
private:
    T* content; //Change here
    int length; // Колко елемента имаме
    int capacity; //Колко памет сме заделили
};

template <typename T>
DynamicArray<T>::DynamicArray(): length(0), capacity(1) {
    this->content = new T[this->capacity];
}

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray<T>& from): length(from.length), capacity(from.capacity) {
    this->content = new int[this->capacity];

    for(int i = 0; i < this->length; i++) {
        this->content[i] = from.content[i];
    }
}

template <typename T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray<T>& from) {
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

template <typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] this->content;
}

template <typename T>
void DynamicArray<T>::append(const T& item) {
    if (this->length == this->capacity) {
        this->capacity *= 2;

        T* new_content = new T[this->capacity];

        for(int i = 0; i < this->length; i++) {
            new_content[i] = this->content[i];
        }
        delete[] this->content;
        this->content = new_content;
    }
    this->content[this->length] = item;
    this->length += 1;
}

template <typename T>
T DynamicArray<T>::get(const int index) const {
    if (0 <= index && index < this->length) {
        return this->content[index];
    }
    return -1;
}

template <typename T>
int DynamicArray<T>::get_length() const {
    return this->length;
}

template <typename T>
T DynamicArray<T>::operator[](const int index) {
    return this->get(index);
}

template <typename T>
std::string DynamicArray<T>::print() const{
    std::string result = "";

    for(int i = 0; i < this->length; i++) {
        result += convert_to_string(this->content[i]);
        result += " ";
    }

    return result;
}

#endif //CODE_DYNAMICARRAY_HPP
