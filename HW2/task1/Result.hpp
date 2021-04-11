#pragma once

// Add whatever else is required to exist in or out the class
// as well as whatever you think is good to be declared too

#include "Error.hpp"
#include "Optional.hpp"

template<typename T>

class Result {
public:
    Result();
    Result(const T &result);
    Result(const std::string &error_message);

    Optional<T> get_result() const;
    Optional<Error> get_error() const;

};
