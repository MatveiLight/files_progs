#include <stdio.h>

double func(double a, double b) {
    return a * b / (a + b);
}

int main(void) {
    double a, b;

    printf("Введите два числа:\n");

    while (scanf("%lf %lf", &a, &b) == 2) {
        if (a + b == 0) {
            printf("Делить на ноль нельзя\n");
        } else {
            printf("Результат: %.4f\n", func(a, b));
        }

        printf("Введите два числа:\n");
    }

    return 0;
}
