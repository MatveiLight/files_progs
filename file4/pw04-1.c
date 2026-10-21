#include <stdio.h>

#define KILOBYTES_IN_MEGABYTE 1024

int main(void) {
    int kb;

    printf("Введите размер в КБ (0 для выхода): ");

    while (scanf("%d", &kb) == 1 && kb > 0) {
        int mb = kb / KILOBYTES_IN_MEGABYTE;
        int remainder = kb % KILOBYTES_IN_MEGABYTE;

        printf("%d КБ = %d МБ и %d КБ\n", kb, mb, remainder);

        printf("Введите размер в КБ (0 для выхода): ");
    }

    return 0;
}
