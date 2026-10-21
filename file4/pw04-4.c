#include <stdio.h>

int main(void) {
    int N;
    int i = 1;
    long long S = 0;

    printf("Введите N: ");

    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Ошибка: N должно быть положительным\n");
        return 1;
    }

    while (i <= N) {
        S += i;
        i++;
    }

    printf("Сумма первых %d натуральных чисел: %lld\n", N, S);

    return 0;
}
