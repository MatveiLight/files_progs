#include <stdio.h>

int main(void) {
    int ch;
    int i = 0;

    printf("Введите текст:\n");

    while ((ch = getchar()) != EOF) {
        i++;

        if (i % 2 == 0) {
            putchar(ch);
        }
    }

    printf("\n");

    return 0;
}
