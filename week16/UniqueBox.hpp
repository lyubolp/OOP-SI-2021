#pragma once

template <class T>
class UniqueBox{
public:
    UniqueBox(): size(0), capacity(1), items(new T[1]) {}

    UniqueBox(const UniqueBox<T>& from) {
        this->copy_object(from);
    }

    UniqueBox<T>& operator=(const UniqueBox<T>& from) {
        if(this != &from) {
            delete[] this->items;
            this->copy_object(from);
        }

        return *this;
    }

    ~UniqueBox() {
        delete[] this->items;
    }

    UniqueBox<T>& operator+=(const T& elem) {
        if(this->size == this->capacity) {
            this->resize();
        }

        if(!this->is_element_in(elem)) {
            this->items[this->size] = elem;
            this->size += 1;
        }

        return *this;
    }
    T& operator[](const int index) const {
        return this->items[index];

    }

    unsigned count() const {
        return this->size;
    }

private:
    void copy_object(const UniqueBox<T>& from) {
        this->size = from.size;
        this->capacity = from.capacity;
        this->items = UniqueBox<T>::copy_array(from.items, from.size, from.capacity);
    }

    static T* copy_array(const T* source, const int size, const int capacity) {
        T* result = new T[capacity];

        for(int i = 0; i < size; i++) {
            result[i] = source[i];
        }

        return result;
    }

    bool is_element_in(const T& elem) const {
        for(int i = 0; i < this->size; i++) {
            if(this->items[i] == elem) {
                return true;
            }
        }
        return false;
    }

    void resize() {
        this->capacity *= 2;

        T* new_items = UniqueBox<T>::copy_array(this->items, this->size, this->capacity);

        delete[] this->items;
        this->items = new_items;
    }

    T* items;

    int size;
    int capacity;
};