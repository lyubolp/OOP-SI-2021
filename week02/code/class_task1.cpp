#include <iostream>

/*
 * Реализирайте клас, представящ времева марка (Timestamp) с полета за часове, минути и секунди.
 * Напишете функции за създаване на времева марка по подадени секунди, извеждане във формат HH:MM:SS,
 * събиране на две времеви марки, преобразуване на времева марка обратно в секунди.
 */

class Timestamp{
public:
    void set_from_seconds(const unsigned int seconds) {
        //3750 / 3600 = 1
        //3750 % 3600 = 150
        //150 / 60 = 2
        //150 % 60 = 30

        this->hours = seconds / this->SECONDS_IN_HOUR;
        int seconds_left = seconds % this->SECONDS_IN_HOUR;
        this->minutes = seconds_left / this->SECONDS_IN_MINUTE;
        this->seconds = seconds_left % this->SECONDS_IN_MINUTE;

    }

    void print() const {
        this->pretty_print(this->hours);
        std::cout << ":";
        this->pretty_print(this->minutes);
        std::cout << ":";
        this->pretty_print(this->hours);
    }

    void add(const Timestamp& other) {
        unsigned int seconds_in_first = this->to_seconds();
        unsigned int second_in_second = other.to_seconds();

        this->set_from_seconds(seconds_in_first + second_in_second);
    }

    unsigned int to_seconds() const {
        return this->hours * this->SECONDS_IN_HOUR + this->minutes * this->SECONDS_IN_MINUTE + this->seconds;
    }
private:
    void pretty_print(unsigned int time_to_print) const {
        if (time_to_print < 10) {
            std::cout << "0";
        }
        std::cout << time_to_print;
    }
    const int SECONDS_IN_HOUR = 3600;
    const int SECONDS_IN_MINUTE = 60;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
};
int main() {

    return 0;
}