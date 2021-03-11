//
// Created by lyubo on 10.03.21 г..
//

#ifndef CODE_TIMESTAMP_HPP
#define CODE_TIMESTAMP_HPP

#include <iostream>

class Timestamp{
public:
    Timestamp(const int init_hours = 0, const int minutes = 0, const int seconds = 0);
    //Timestamp(const Timestamp& from);
    void set_from_seconds(const unsigned int seconds);
    void print() const;
    void add(const Timestamp& other);
    unsigned int to_seconds() const;
private:
    void pretty_print(unsigned int time_to_print) const;
    const int SECONDS_IN_HOUR = 3600;
    const int SECONDS_IN_MINUTE = 60;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
};
#endif //CODE_TIMESTAMP_HPP
