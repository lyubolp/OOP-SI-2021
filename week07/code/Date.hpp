//
// Created by lyubo on 7.04.21 г..
//

#ifndef WEEK07_DATE_HPP
#define WEEK07_DATE_HPP

#include <utility>

class Date {
public:
    Date();
    Date(const int init_day, const int init_month, const int init_year);

    void add(const int days);
    void subtract(const int days);

    bool is_leap_year() const;
    int days_until_xmas() const;
    int days_until_new_year() const;
    int days_between_dates(const Date& other) const;

    bool is_later_than(const Date& other) const;

    int get_day() const;
    int get_month() const;
    int get_year() const;
private:

    std::pair<int, int> get_date(const int days, const int year) const;

    static bool is_year_leap(const int year);
    static int get_days_in_month(const int month, const int year);
    static int get_days_passed_from_date(const int day, const int month, const int year);
    static int get_days_in_year(const int year);

    int days_from_start_of_year;
    int years;

};
#endif //WEEK07_DATE_HPP
