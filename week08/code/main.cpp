#include <iostream>
#include <string>
class Vehicle {
public:
    Vehicle(): horsepower(0) {}
    Vehicle(const std::string &maker, const std::string &model, const std::string &engine_type, const int horsepower) : maker(maker), model(model), engine_type(engine_type), horsepower(horsepower){}

    std::string get_maker() const {
        return maker;
    }

    std::string get_model() const {
        return model;
    }

    std::string get_engine_type() const {
        return engine_type;
    }

    std::string to_string() const {
        std::string result = "Maker: " + Vehicle::maker + ", model: " + Vehicle::model;
        result += ", engine: " + Vehicle::engine_type + ", horsepower: " + std::to_string(Vehicle::horsepower);

        return result;
    }

    int getHorsepower() const {
        return horsepower;
    }

protected:
    std::string maker;
    std::string model;
    std::string engine_type;

    int horsepower;
};

class Car: public Vehicle{
public:
    Car():seats(0) {
        std::cout << "Car() called\n";
    }

    Car(const std::string &maker, const std::string &model, const std::string &engine_type,
        const int horsepower, const int seats) : seats(seats), Vehicle(maker, model, engine_type, horsepower) {
    }

    std::string to_string() const {
        return Vehicle::to_string() + ", seats: " + std::to_string(this->seats);
    }
private:
    int seats;
};

class Motorcyle: public Vehicle{
public:
    Motorcyle(): luggage(0) {}

    Motorcyle(const std::string &maker, const std::string &model, const std::string &engine_type, const int horsepower,
              const int luggage) : luggage(luggage), Vehicle(maker, model, engine_type, horsepower) {
    }

    int getLuggage() const {
        return luggage;
    }

    std::string to_string() const {
        return Vehicle::to_string() + ", luggage: " + std::to_string(this->luggage);
    }

private:
    int luggage;
};

/*           private     protected   public

 public   :  private     protected   public
 protected:  private     protected   protected
 private  :  -------    ----------   ---------
 */


class A{
public:
    A() {
        std::cout << "A() called\n";
    }

    A(const int a) {
        std::cout << "A(const int a) called\n";
    }


    A& operator=(const A& from) {
        if (this != &from) {
            std::cout << "operator= A called\n";
        }
        return *this;
    }

    ~A() {
        std::cout << "~A() called\n";
    }
};

class B: A{
public:
    B() {
        std::cout << "B() called\n";
    }

    B(const int a): A(a) {
        std::cout << "B(const int a) called\n";
    }

    B(const B& from): A(from) {
        std::cout << "copy B() called\n";
    }

    B& operator=(const B& from) {
        if (this != &from) {
            A::operator=(from);
            std::cout << "operator= B called\n";
        }
        return *this;
    }

    ~B() {
        std::cout << "~B() called\n";
    }
};

class foo{
public:
    foo() {
        this->some_value = new int(6);
    }

    foo(const int init_val) {
        this->some_value = new int(init_val);
    }

    foo(const foo& from) {
        this->some_value = new int(*from.some_value);
    }

    foo& operator=(const foo& from) {
        if(this != &from) {
            delete this->some_value;
            this->some_value = new int(*from.some_value);
        }
        return *this;
    }

    ~foo() {
        delete this->some_value;
    }

    int get_some_value() const {
        return *this->some_value;
    }
private:
    int* some_value;
};

class bar: public foo{
public:
    bar() {
        this->another_value = new int(12);
    }
    bar(const int some_value, const int another_value): foo(some_value) {
        this->another_value = new int(another_value);
    }

    bar(const bar& from): foo(from) {
        this->another_value = new int(*from.another_value);
    }

    bar& operator=(const bar& from) {
        if (this != &from) {
            foo::operator=(from);
            delete this->another_value;
            this->another_value = new int(*from.another_value);
        }
        return *this;
    }

    ~bar() {
        delete this->another_value;
    }

    int get_another_value() const {
        return *this->another_value;
    }
private:
    int* another_value;
};
int main() {
//    Car myCar("Mazda", "6", "I4", 140, 6);
//    std::cout << myCar.to_string() << std::endl;
//
//    Motorcyle myMotorcycle("Honda", "Z70", "V6", 200, 100);
//    std::cout << myMotorcycle.to_string() << std::endl;


//    B b(3);
//    std::cout << "Finished creating b\n";
//    B b2(b);
//    std::cout << "Finished creating b2\n";
//    B b3;
//    b2 = b3;
//    std::cout << "Finished creating b3\n";

    bar a(5, 12);
    std::cout << a.get_some_value() << " " << a.get_another_value() << std::endl;
    return 0;
}
