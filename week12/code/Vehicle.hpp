//
// Created by lyubo on 12.05.21 г..
//

#ifndef CODE_VEHICLE_HPP
#define CODE_VEHICLE_HPP

#include <string>

enum class Severity {
    Low,
    Medium,
    High
};

class Vehicle {
public:
    Vehicle();
    Vehicle(const std::string& maker, const std::string& model, const unsigned short year, const std::string& problem, const Severity& severity);

    std::string get_maker() const;
    std::string get_model() const;
    unsigned short get_year() const;
    std::string get_problem() const;
    Severity get_severity() const;

    void set_maker(const std::string& new_maker);
    void set_model(const std::string& new_model);
    void set_year(const unsigned short new_year);
    void set_problem(const std::string& new_problem);
    void set_severity(const Severity& new_severity);

    virtual Vehicle* clone() const = 0;
    virtual ~Vehicle() = default;

protected:
    std::string maker;
    std::string model;
    unsigned short year;
    std::string problem;
    Severity severity;
};


#endif //CODE_VEHICLE_HPP
