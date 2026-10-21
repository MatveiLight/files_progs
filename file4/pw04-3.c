#include <stdio.h>

int main(void) {
    int N;
    int a = 1;
    int i = 0;

    printf("Введите количество элементов: ");

    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Некорректное количество элементов\n");
        return 1;
    }

    while (i < N) {
        printf("%d ", a);
        a += 2;
        i++;
    }

    printf("\n");

    return 0;
}
