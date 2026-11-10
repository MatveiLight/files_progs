#include <stdio.h>

int main(void) {
    double water;
    double cost;

    printf("Введите расход воды (м3): ");
    scanf("%lf", &water);

    if (water < 0) {
        printf("Ошибка: расход воды не может быть отрицательным.\n");
        return 0;
    }

    if (water <= 15) {
        cost = water * 0.5;
    }
    else if (water <= 40) {
        cost = 15 * 0.5 + (water - 15) * 1.5;
    }
    else {
        cost = 15 * 0.5 + 25 * 1.5
               + (water - 40) * 2.5;
    }

    printf("Расход воды: %.2f м3\n", water);
    printf("Итоговая стоимость: %.2f\n", cost);

    return 0;
}
