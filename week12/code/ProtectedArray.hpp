//
// Created by lyubo on 12.05.21 г..
//

#ifndef CODE_PROTECTEDARRAY_HPP
#define CODE_PROTECTEDARRAY_HPP

#include "ProtectedValue.hpp"

template <class T>
class ProtectedArray {
    ProtectedArray();
    ProtectedArray(const ProtectedArray<T>& from);
    ProtectedArray<T> operator=(const ProtectedArray<T>& from);
    ~ProtectedArray();

    void add(const T& value, const unsigned code);
    T get(const int& index, const unsigned code);
private:
    static ProtectedValue<T>* allocate_memory(const int size);
    static void copy_memory(ProtectedValue<T>* destination, const ProtectedValue<T>* source, const int size);

    void resize();
    void copy_object(const ProtectedArray<T>& from);

    ProtectedValue<T>* elements;
    int size;
    int capacity;
};

template <class T>
ProtectedArray<T>::ProtectedArray(): size(0), capacity(1) {
    this->elements = ProtectedArray<T>::allocate_memory(capacity);
}

template <class T>
ProtectedArray<T>::ProtectedArray(const ProtectedArray<T>& from) {
    this->copy_object(from);
}

template <class T>
ProtectedArray<T> ProtectedArray<T>::operator=(const ProtectedArray<T>& from) {
    if (this != &from) {
        delete[] this->elements;
        this->copy_object(from);
    }
    return *this;
}

template <class T>
ProtectedArray<T>::~ProtectedArray() {
    delete[] this->elements;
}

template <class T>
void ProtectedArray<T>::add(const T& value, const unsigned code) {
    if (this->size == this->capacity) {
        this->resize();
    }
    this->elements[this->size] = ProtectedValue<T>(value, code);
}

template <class T>
T ProtectedArray<T>::get(const int& index, const unsigned code) {
    try {
        this->elements[index].get_value(code);
    }
    catch (const std::invalid_argument& ex) {
        std::cout << "Code was wrong !";
        return T();
    }
}

template <class T>
ProtectedValue<T>* ProtectedArray<T>::allocate_memory(const int size) {
    return new ProtectedArray<T>[size];
}

template <class T>
void ProtectedArray<T>::copy_memory(ProtectedValue<T>* destination, const ProtectedValue<T>* source, const int size) {
     for(int i = 0; i < size; i++) {
         destination[i] = source[i];
     }
 }

 template <class T>
void ProtectedArray<T>::copy_object(const ProtectedArray<T>& from) {
    this->size = from.size;
    this->capacity = from.capacity;

    this->elements = ProtectedArray<T>::allocate_memory(this->capacity);
    ProtectedArray<T>::copy_memory(this->elements, from.elements, this->size);
}

template <class T>
void ProtectedArray<T>::resize() {
    this->capacity *= 2;

    ProtectedArray<T>* new_memory = ProtectedArray<T>::allocate_memory(this->capacity);
    ProtectedArray<T>::copy_memory(new_memory, this->elements, this->size);

    delete[] this->elements;

    this->elements = new_memory;
}
#endif //CODE_PROTECTEDARRAY_HPP
