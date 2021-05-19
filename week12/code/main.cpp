#include <iostream>
#include <vector>

class A{
public:
    A(const int value = 0): foo(value) {}
    int foo;

    virtual ~A() = default;
};

class B: public A{
public:
   B(const int value = 0): A(value) {}
};

class C{
public:
    C(const int value = 0): foo(value) {}
    int foo;
};
int main() {

    //Normal casting (C-style casting)
    double pi = 3.14;
    std::cout << (int)pi;

    //const_cast
    const B* a = new B(5);
    //B* b = a;
    B* c = const_cast<B*>(a);

    //static_cast
    A* d = new B(5);
    B* e = static_cast<B*>(d);
    std::cout << e->foo << std::endl;

    //dynamic_cast
    A* f = new A(5);
    B* g = dynamic_cast<B*>(f);
    std::cout << g->foo << std::endl;


    //Reinterpret_cast


    return 0;
}
