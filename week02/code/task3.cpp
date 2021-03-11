#include <iostream>

/*
 * Напишете програма, която да помага за следенето за складови наличности на различни видове хранителни стоки.
 * Всяка стока да има следните свойства - брой, цена на закупуване, цена на продажба,
 *      вид (вида може да бъде: бързоразваляща, опакована, издържаща на топло, застояла.
 *      Сами преценете как да реализирате вида на стоката).
 * Да се напишат функции за калкулиране на печалба от продажбата на дадена хранителна стока,
 * фунцкия за въвеждане на продукт и функция за извеждане на цялата информация за дадена стока.
 * Да се направи масив от стоки.
 */

enum FoodType {
    FastDecaying,
    Packed,
    HeatResistant,
    Stale
};

struct Food{
    int count;
    double buy_price;
    double sell_price;
    FoodType type;
};

double calculate_profit(const Food& target) {
    return target.sell_price - target.buy_price;
}

Food create_food_from_user_input() {
    Food result;

    std::cin >> result.count;
    std::cin >> result.buy_price;
    std::cin >> result.sell_price;

    std::cout << "Please enter food type:\n\t0 - FastDecaying\n\t1 - Packed\n\t2 - HeatResistant\n\t3 - Stale\n";
    unsigned int choice = 0;
    std::cin >> choice;

    if (choice == 0 || choice > 3) {
        result.type = FoodType::FastDecaying;
    }
    else if (choice == 1) {
        result.type = FoodType::Packed;
    }
    else if (choice == 2) {
        result.type = FoodType::HeatResistant;
    }
    else if (choice == 3) {
        result.type = FoodType::Stale;
    }

    return result;
}
int main() {

    Food* arr = new Food[5];
    return 0;
}