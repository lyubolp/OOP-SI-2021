//
// Created by lyubo on 12.05.21 г..
//

#ifndef CODE_CAR_HPP
#define CODE_CAR_HPP

#include "Vehicle.hpp"
class Car: public Vehicle {
public:
    Car();
    Car(const std::string& maker, const std::string& model, const unsigned short year, const std::string& problem, const Severity& severity, const bool is_private);

    bool get_is_private() const;
    void set_is_private(const bool new_is_private);

    Vehicle* clone() const override;
private:
    bool is_private;
};


#endif //CODE_CAR_HPP
