//
// Created by lyubo on 28.05.21 г..
//

#ifndef CODE_INTEGEROPERATION_HPP
#define CODE_INTEGEROPERATION_HPP


// If the code does not compile - 50% penalty


//5pts - const, const&, const this
//5pts - code reuse

class IntegerOperation {
public:
    IntegerOperation(); //6pts
    IntegerOperation(const IntegerOperation& from); //6pts
    IntegerOperation& operator=(const IntegerOperation& from); //6pts
    ~IntegerOperation(); //6pts

    void sum(); //6pts
    void sub(); //6pts
    void multiply(); //6pts

    void insert(const int number); //10pts

    int get_result() const;

    int operator+(IntegerOperation& second); //6pts
    int operator-(IntegerOperation& second); //6pts
    int operator*(IntegerOperation& second); //6pts
private:
    void resize();
    void clear();
    static void copy_memory(int* destination, const int* source, const int size);
    void copy_object(const IntegerOperation& from);

    int* numbers;
    int result;
    int size;
};

#endif //CODE_INTEGEROPERATION_HPP
