//
// Created by lyubo on 4.03.21 г..
//

class Foo{
public:
    void change_a() { //Foo* this
        this->a = 6;
    }
    int get_a() const { //Foo* this
        return this->a;
    }
private:
    int a = 5;
};

inline int do_stuff() {
    //прави някакви неща
    return 3 * 2;
}
int main() {
    const double PI=3.14;
    int b = 5;
    const int c = 7;

    std::cout << do_stuff() << std::endl;
    std::cout << do_stuff() << std::endl;
    return 0;
}