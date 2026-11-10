#include <stdio.h>

int main(void) {
    const int HEIGHT = 5;

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            if (i == j) {
                printf("x ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
