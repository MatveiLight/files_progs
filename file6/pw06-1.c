#include <stdio.h>

int main(void) {
    char ch;
    char prev = '\0';
    int count = 0;

    printf("Введите текст (для завершения введите #):\n");

    while ((ch = getchar()) != '#') {
        if (prev == 't' && ch == 'h') {
            count++;
        }

        prev = ch;
    }

    printf("Количество вхождений последовательности th: %d\n", count);

    return 0;
}
