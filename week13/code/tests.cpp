//
// Created by lyubo on 13.05.21 г..
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch_amalgamated.hpp"

#include "Factorial.hpp"

TEST_CASE("Factorial of 2") {
    REQUIRE(Factorial::from(2) == 2);
}

TEST_CASE("Factorial of 3") {
    REQUIRE(Factorial::from(3) == 6);
}

TEST_CASE("Factorial of 0") {
    REQUIRE(Factorial::from(0) == 1);
}

TEST_CASE("Factorial of -1") {
    REQUIRE_THROWS_AS(Factorial::from(-1), std::invalid_argument);
}

TEST_CASE("Factorial of 3.14") {
    REQUIRE(Factorial::from(3.14) == 6);
}

TEST_CASE("Factorial of 1") {
    REQUIRE(Factorial::from(1) == 1);
}

TEST_CASE("Factorial of 500") {
    REQUIRE_THROWS_AS(Factorial::from(500), std::invalid_argument);
}

