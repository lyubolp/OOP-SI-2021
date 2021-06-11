#pragma once
#include "Item.hpp"
class Food: public Item {
public:
    Food(const std::string& name = "", const std::string& code = "", const double& price = 0.0, const unsigned calories = 0);

    unsigned get_calories() const;
    Item* clone() const override;
    std::string to_string() const override;
private:
    unsigned calories;
};
