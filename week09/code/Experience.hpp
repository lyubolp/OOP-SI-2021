//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_EXPERIENCE_HPP
#define CODE_EXPERIENCE_HPP


class Experience {
public:
    Experience();
    Experience(const unsigned days, const unsigned months, const unsigned years);

    unsigned get_days() const;
    unsigned get_months() const;
    unsigned get_years() const;
private:
    unsigned days;
    unsigned months;
    unsigned years;
};


#endif //CODE_EXPERIENCE_HPP
