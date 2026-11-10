#include <stdio.h>
#include <math.h>

double calc(double a, double b) {
    return exp(a) + log(b);
}

int main(void) {
    double a, b;

    while (1) {
        printf("Введите a и b (для выхода нажмите Ctrl+Z): ");

        if (scanf("%lf %lf", &a, &b) != 2) {
            break;
        }

        if (b <= 0) {
            printf("Ошибка: b должно быть больше нуля!\n");
            continue;
        }

        printf("Результат: %.4f\n", calc(a, b));
    }

    return 0;
}
