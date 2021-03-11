//
// Created by lyubo on 10.03.21 г..
//

#include "timestamp.hpp"

Timestamp::Timestamp(const int init_hours, const int minutes, const int seconds): hours(init_hours), minutes(minutes), seconds(seconds) {
}

/*Timestamp::Timestamp(const Timestamp& from){
    this->hours = from.hours;
    this->minutes = from.minutes;
    this->seconds = from.seconds;
}*/
void Timestamp::set_from_seconds(const unsigned int seconds) {
    this->hours = seconds / this->SECONDS_IN_HOUR;
    int seconds_left = seconds % this->SECONDS_IN_HOUR;
    this->minutes = seconds_left / this->SECONDS_IN_MINUTE;
    this->seconds = seconds_left % this->SECONDS_IN_MINUTE;
}

void Timestamp::print() const {
    this->pretty_print(this->hours);
    std::cout << ":";
    this->pretty_print(this->minutes);
    std::cout << ":";
    this->pretty_print(this->seconds);
}

void Timestamp::add(const Timestamp& other) {
    unsigned int seconds_in_first = this->to_seconds();
    unsigned int second_in_second = other.to_seconds();

    this->set_from_seconds(seconds_in_first + second_in_second);
}

unsigned int Timestamp::to_seconds() const {
    return this->hours * this->SECONDS_IN_HOUR + this->minutes * this->SECONDS_IN_MINUTE + this->seconds;
}

void Timestamp::pretty_print(unsigned int time_to_print) const {
    if (time_to_print < 10) {
        std::cout << "0";
    }
    std::cout << time_to_print;
}

