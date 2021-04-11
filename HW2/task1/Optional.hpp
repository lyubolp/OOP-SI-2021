#pragma once

// Add whatever else is required to exist in or out the class
// as well as whatever you think is good to be declared too

template <typename T>

class Optional{
public:
    Optional();
    Optional(const T& value);

    bool is_none() const;
    T get_value() const;
};
