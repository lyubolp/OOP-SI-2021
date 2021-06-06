#include <iostream>
#include <vector>
#include <algorithm>

void print_string_n_times(const std::string& to_print, const int times) {
    if (times == 0) {
        return;
    }
    std::cout << to_print << std::endl;
    print_string_n_times(to_print, times - 1);
}


//int (*func)(const int, const int) ->
//`int` -> return type
//`(*func)` -> name
//`(const int, const int)` -> arguments

int apply(const int first, const int second, int (*func)(const int, const int)) {
    return func(first, second);
}

std::vector<int> apply_to_vec(const std::vector<int>& source, int (*func)(const int)) {
    std::vector<int> result;

    for(const int item: source) {
        result.push_back(func(item));
    }
    return result;
}

std::vector<int> filter_vec(const std::vector<int>& source, bool (*func)(const int)) {
    std::vector<int> result;

    for(const int item: source) {
        if (func(item)) {
            result.push_back(item);
        }
    }
    return result;
}

int fold(const std::vector<int>& source, int init, int (*func)(const int, const int)) {
    int result = init;

    for(const int item: source) {
        result = func(item, result);
    }

    return result;
}

void print(const std::vector<int>& result) {
    for(const int item: result) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
int main() {

//    const double PI = 3.14;
//    const double R = 2.5;
//    auto area = [&PI, R](const double a) -> double{
//        return a * PI * R;
//    };
//
//    std::cout << area(5);
//
//    std::cout << apply(5, 3, [](const int f, const int s) -> int {return f + s;}) << std::endl;
//    std::cout << apply(5, 3, [](const int f, const int s) -> int {return f * s;}) << std::endl;

    std::vector<int> items = {6, 5, 11, 8, 7, -3};

//    std::vector<int> result = apply_to_vec(items, [](const int item) -> int { return item * 2; });
//    print(result);
//
//    result = filter_vec(items, [](const int item) -> bool {return item % 2 == 0;});
//    print(result);
//
//    int single_result = fold(items, 0, [](const int item, const int result) -> int {return item + result;});
//    std::cout << single_result << std::endl;

    /*std::vector<int> result(6);
    std::transform(items.begin(), items.end(), result.begin(), [](const int item) -> int {return item * 2;});
    print(result);*/

    return 0;
}
