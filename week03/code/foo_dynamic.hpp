//
// Created by lyubo on 10.03.21 г..
//

#ifndef CODE_FOO_DYNAMIC_HPP
#define CODE_FOO_DYNAMIC_HPP


class foo_dynamic {
public:
    foo_dynamic();
    foo_dynamic(const foo_dynamic& from);

    void set_value(const int new_value);
    int get_value() const;
private:
    int* some_value;
};


#endif //CODE_FOO_DYNAMIC_HPP
