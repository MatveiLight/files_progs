#include <stdio.h>

long long rec(int n) {
    if (n == 0) {
        return 1;
    }

    return rec(n - 1) * (4 * n - 2) / (n + 1);
}

long long iter(int n) {
    long long c = 1;
    int i;

    for (i = 1; i <= n; i++) {
        c = c * (4 * i - 2) / (i + 1);
    }

    return c;
}

int main(void) {
    int n;

    printf("Введите n от 0 до 30: ");

    if (scanf("%d", &n) == 1 && n >= 0 && n <= 30) {
        printf("Рекурсивно: %lld\n", rec(n));
        printf("Итеративно: %lld\n", iter(n));
    } else {
        printf("Ошибка ввода\n");
    }

    return 0;
}
