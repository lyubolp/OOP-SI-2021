#include <iostream>
#include <string>
#include <vector>

class Route{
    Route(const std::string& start = "", const std::string& end = ""): start(start), end(end) {}

    std::string get_start() const;
    std::string get_end() const;
private:
    std::string start;
    std::string end;
};
class Vehicle{
public:
    Vehicle() = default;
    Vehicle(const std::string& maker, const std::string& model, const std::string& engine):maker(maker), model(model), engine(engine) {}

    std::string get_maker() const {
        return this->maker;
    }
    std::string get_model() const {
        return this->model;
    }
    std::string get_engine() const {
        return this->engine;
    }

protected:
    std::string maker;
    std::string model;
    std::string engine;
};

class Transport: virtual public Vehicle {
public:
    Transport() = default;
    Transport(const std::string& licence, int max_allowed_pasangers): licence_id(licence), max_allowed_pasangers(max_allowed_pasangers) {}

    void add_route(const Route& route) {
        this->routes.push_back(route);
    }

    std::string get_licence_id() const {
        return this->licence_id;
    }
    int get_max_pasangers() const {
        return this->max_allowed_pasangers;
    }

    std::vector<Route> get_routes() const {
        return this->routes;
    }
private:
    std::string licence_id;
    int max_allowed_pasangers;
    std::vector<Route> routes;
};
class Car: virtual public Vehicle{
public:
    Car() = default;
    Car(const std::string& maker, const std::string& model, const std::string& engine, bool is_self_driving):Vehicle(maker, model, engine), is_self_driving(is_self_driving) {}

    bool get_is_self_driving() const {
        return this->is_self_driving;
    }
private:
    bool is_self_driving;
};

class Van: public Vehicle{
public:
    Van() = default;
    Van(const std::string& maker, const std::string& model, const std::string& engine, const int seats):Vehicle(maker, model, engine), seats(seats) {}

    int get_seats() const {
        return this->seats;
    }
private:
    int seats;
};

class Taxi: public Car, public Transport {
public:
    Taxi() = default;

    std::string to_string() const {
        std::string result;
        result = "Maker: " + this->maker + "\n";
        result = "Model: " + this->model + "\n";

        return result;
    }
};

//Taxi -> Car - - -> Vehicle
//Taxi -> Transport - - - -> Vehicle
//Taxi -> Vehicle

/*
 *          Vehicle
 *     Car          Transport
 *           Taxi
 */
int main() {
    Car b;
    Taxi a;
    std::cout << a.to_string() << std::endl;
    return 0;
}
