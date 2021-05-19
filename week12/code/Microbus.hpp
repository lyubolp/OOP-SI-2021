//
// Created by lyubo on 13.05.21 г..
//

#ifndef CODE_MICROBUS_HPP
#define CODE_MICROBUS_HPP

#include "Vehicle.hpp"
class Microbus: public Vehicle {
public:
    Microbus();
    Microbus(const std::string& maker, const std::string& model, const unsigned short year, const std::string& problem, const Severity& severity, const bool has_passangers);

    bool get_has_passangers() const;
    void set_has_passangers(const bool new_has_passangers);

    Vehicle* clone() const override;
private:
    bool has_passangers;
};


#endif //CODE_MICROBUS_HPP
