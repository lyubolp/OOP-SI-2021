#pragma once

#include <string>

class Item {
public:
    Item(const std::string& name = "", const std::string& code = "", const double& price = 0.0);

    std::string get_name() const;
    std::string get_code() const;
    double get_price() const;

    virtual std::string to_string() const;
    virtual Item* clone() const = 0;
    virtual ~Item() = default;
private:
    std::string name;
    std::string code;
    double price;
};

