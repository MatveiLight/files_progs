#include <stdio.h>

double c_to_f(double c) {
    const double factor = 9.0 / 5.0;
    const double offset = 32.0;

    return c * factor + offset;
}

int main(void) {
    double c;

    printf("Введите температуру в градусах Цельсия: ");

    while (scanf("%lf", &c) == 1) {
        double f = c_to_f(c);

        printf("%.2f C = %.2f F\n", c, f);
        printf("Введите температуру в градусах Цельсия: ");
    }

    printf("\nВвод завершён.\n");

    return 0;
}
