#include <iostream>

/*
 * Напишете програма, която реализира част от играта "Змия".
 * Змията да има необходимите член-данни като позиция по x и по y.
 * Да се реализират подходящи методи - за промяна и достъп до x и y.
 */
struct Snake { //8B
    int x = 0; //4B
    int y = 0; //4B
};

int get_snake_x(const Snake& instance) {
    return instance.x;
}

int get_snake_y(const Snake& instance) {
    return instance.y;
}

void set_snake_x(Snake& instance, int new_x) {
    instance.x = new_x;
}

void set_snake_y(Snake& instance, int new_y) {
    instance.y = new_y;
}
int main() {
    return 0;
}