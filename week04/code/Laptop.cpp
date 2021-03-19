//
// Created by lyubo on 18.03.21 г..
//

#include "Laptop.hpp"

char* Laptop::copy_char_array(const char* source) {
    int length = strlen(source);
    char* destination = new char[length + 1];

    strcpy(destination, source);
    destination[length] = '\0';

    return destination;
}

Laptop::Laptop(): maker(new char[1]{'\0'}), model(new char[1]{'\0'}), price(0.0), display_size(0.0), RAM(0.0), battery_capacity(0) {}

Laptop::Laptop(const char* maker, const char* model, const double& price, const double& display_size, const cpu& processor, const double& ram, const int battery_capacity)
        :price(price), display_size(display_size), processor(processor), RAM(ram), battery_capacity(battery_capacity) {
    this->maker = Laptop::copy_char_array(maker);
    this->model = Laptop::copy_char_array(model);
}
Laptop::Laptop(const Laptop& from) {
    this->copy_laptop(from);
}
Laptop& Laptop::operator=(const Laptop& from) {
    if (this != &from) {
        delete[] this->maker;
        delete[] this->model;
        this->copy_laptop(from);
    }
    return *this;
}
Laptop::~Laptop() {
    delete[] this->maker;
    delete[] this->model;
}

bool Laptop::operator<(const Laptop& to) const {
    return this->display_size < to.display_size;
}
bool Laptop::operator==(const Laptop& to) const {
    return this->display_size == to.display_size;
}

bool Laptop::operator>(const Laptop& to) const {
    return this->display_size > to.display_size;
}
bool Laptop::operator!=(const Laptop& to) const {
    //TODO - Research why !(this == to) won't work
    return this->display_size != to.display_size;
}


void Laptop::copy_laptop(const Laptop &from) {
    this->model = Laptop::copy_char_array(from.model);
    this->maker = Laptop::copy_char_array(from.maker);
    this->price = from.price;
    this->display_size = from.display_size;
    this->processor = from.processor;
    this->RAM = from.RAM;
    this->battery_capacity = from.battery_capacity;
}


void Laptop::upgrade_ram(const double& new_ram_size) {
    this->RAM = new_ram_size;
}
void Laptop::upgrade_cpu(const cpu& new_cpu) {
    this->processor = new_cpu;
}

void Laptop::print() const {
    std::cout << "Maker: " << this->maker << "\n"
            << "Model: " << this->model << "\n"
            << "Price: " << this->price << "\n"
            << "Display size: " << this->display_size << "\n"
            << "RAM: " << this->RAM << "\n"
            << "Battery capacity: " << this->battery_capacity << "\n"
            << "CPU clock: " << this->processor.get_clock_rate() << "\n" << std::endl;
}