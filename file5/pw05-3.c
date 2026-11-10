#include <stdio.h>

int main(void) {
    int n;

    while (1) {
        printf("Введите количество слагаемых N (0 для выхода): ");
        scanf("%d", &n);

        if (n <= 0) {
            break;
        }

        double sum = 0.0;
        double factorial = 1.0;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
            sum += 1.0 / factorial;
        }

        printf("SUM: %.6f\n", sum);
    }

    return 0;
}
