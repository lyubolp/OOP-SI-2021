//
// Created by lyubo on 7.04.21 г..
//

#include "Date.hpp"
Date::Date(): years(2000), days_from_start_of_year(0) {}
Date::Date(const int init_day, const int init_month, const int init_year): years(init_year) {
    this->days_from_start_of_year = Date::get_days_passed_from_date(init_day, init_month, init_year);
}

void Date::add(const int days) {
    this->days_from_start_of_year += days;

    while (this->days_from_start_of_year > Date::get_days_in_year(this->years)) {
        this->days_from_start_of_year -= Date::get_days_in_year(this->years);
        this->years += 1;
    }
}
void Date::subtract(const int days) {
    this->days_from_start_of_year -= days;

    while (this->days_from_start_of_year < 0) {
        this->days_from_start_of_year += Date::get_days_in_year(this->years);
        this->years -= 1;
    }
}

bool Date::is_leap_year() const {
    return Date::is_year_leap(this->years);
}

int Date::days_until_xmas() const {
    return this->days_between_dates(Date(25, 12, this->years));
}
int Date::days_until_new_year() const {
    return this->days_between_dates(Date(1, 1, this->years + 1));
}
int Date::days_between_dates(const Date& other) const {
    return this->days_from_start_of_year - other.days_from_start_of_year;
}

bool Date::is_later_than(const Date& other) const {
    if (this->years > other.years) {
        return true;
    }
    else if(this->years < other.years) {
        return false;
    }
    else {
        return this->days_from_start_of_year > other.days_from_start_of_year;
    }
}

int Date::get_day() const {
    return this->get_date(this->days_from_start_of_year, this->years).first;
}
int Date::get_month() const {
    return this->get_date(this->days_from_start_of_year, this->years).second;
}
int Date::get_year() const {
    return this->years;
}

bool Date::is_year_leap(const int year) {
    return (year % 4 == 0 || (year % 400 == 0 && year % 100 != 0));
}
std::pair<int, int> Date::get_date(const int days, const int year) const {
    int days_left = days;
    int current_day = 1;
    int current_month = 1;

    while(days_left < Date::get_days_in_month(current_month, year)) {
        current_month += 1;
        days_left -= Date::get_days_in_month(current_month, year);
    }
    current_day = days_left;

    return {current_day, current_month};
}

int Date::get_days_passed_from_date(const int day, const int month, const int year) {
    int sum_days = 0;
    for (int current_month = 1; current_month < month; current_month++) {
        sum_days += Date::get_days_in_month(current_month, year);
    }
    return day + sum_days;
}

int Date::get_days_in_month(const int month, const int year) {
    if (month == 1 || month == 3 || month == 5
        || month == 7 || month == 8 || month == 10 || month == 12 ){
        return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        if (Date::is_year_leap(year)) {
            return 29;
        }
        else {
            return 28;
        }
    }
}

int Date::get_days_in_year(const int year) {
    if (is_year_leap(year)) {
        return 366;
    }
    else {
        return 365;
    }
}