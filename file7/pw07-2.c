#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int count = 0;
    int total = 0;

    printf("Введите текст:\n");

    while ((ch = getchar()) != EOF) {
        total++;

        if (isdigit(ch) && ch <= '7') {
            count++;
        }
    }

    printf("Количество восьмеричных цифр: %d\n", count);
    printf("Всего символов: %d\n", total);

    return 0;
}
