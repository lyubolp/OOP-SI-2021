//
// Created by lyubo on 12.05.21 г..
//

#include "Garage.hpp"

unsigned short Garage::MAX_CAPACITY = 15;

Garage::Garage(const Garage& from) {
    this->copy_clones(from.vehicles);
}
Garage& Garage::operator=(const Garage& from) {
    if (this != &from) {
        this->clean_clones();
        this->copy_clones(from.vehicles);
    }
    return *this;
}

Garage::~Garage() {
    this->clean_clones();
}
void Garage::add(const Car& car) {
    this->vehicles.push_back(car.clone());
}
void Garage::add(const Microbus& microbus) {
    this->vehicles.push_back(microbus.clone());
}
bool Garage::is_shop_full() const {
    //Car
    //  Low => 1
    //  Medium => 2
    //  High => 4

    //Microbus
    //  Low => 2
    //  Medium => 3
    //  High => 5

    unsigned short score = 0;
    for(const Vehicle* vehicle: this->vehicles) {
        const Car* car = dynamic_cast<const Car*>(vehicle);
        const Microbus* microbus = dynamic_cast<const Microbus*>(vehicle);
        if (car != nullptr) {
            if(car->get_severity() == Severity::Low) {
                score += 1;
            }
            else if(car->get_severity() == Severity::Medium) {
                score += 2;
            }
            else {
                score += 4;
            }
        }
        else if(microbus != nullptr) {
            if(microbus->get_severity() == Severity::Low) {
                score += 2;
            }
            else if(microbus->get_severity() == Severity::Medium) {
                score += 3;
            }
            else {
                score += 5;
            }
        }
    }


    return true;
}

void Garage::clean_clones() {
    for(const auto* vehicle: this->vehicles) {
        delete vehicle;
    }
}
void Garage::copy_clones(const std::vector<Vehicle*> other_vehicles) {
    for(const auto* vehicle: other_vehicles) {
        this->vehicles.push_back(vehicle->clone());
    }
}