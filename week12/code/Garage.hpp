//
// Created by lyubo on 12.05.21 г..
//

#ifndef CODE_GARAGE_HPP
#define CODE_GARAGE_HPP

#include <vector>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Microbus.hpp"

class Garage {
public:
    Garage() = default;
    Garage(const Garage& from);
    Garage& operator=(const Garage& from);
    ~Garage();
    void add(const Car& car);
    void add(const Microbus& microbus);
    bool is_shop_full() const;
private:
    void clean_clones();
    void copy_clones(const std::vector<Vehicle*> other_vehicles);
    std::vector<Vehicle*> vehicles;

    static unsigned short MAX_CAPACITY;
};


#endif //CODE_GARAGE_HPP
