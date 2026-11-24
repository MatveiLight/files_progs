#include <stdio.h>

void sort(int *a, int *b) {
    int temp;

    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(void) {
    int a = 5, b = 10;

    printf("До: a = %d, b = %d\n", a, b);

    sort(&a, &b);

    printf("После: a = %d, b = %d\n", a, b);

    return 0;
}
