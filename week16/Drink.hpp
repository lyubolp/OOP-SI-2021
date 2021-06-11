#pragma once
#include "Item.hpp"
class Drink: public Item {
public:
    Drink(const std::string& name = "", const std::string& code = "", const double& price = 0.0, const double& alcohol = 0.0);

    double get_alcohol() const;
    Item* clone() const override;
    std::string to_string() const override;
private:
    double alcohol;
};
