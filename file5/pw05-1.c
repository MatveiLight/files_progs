#include <stdio.h>

int main(void) {
    double x, y;
    int i = 1;

    printf("N\tX\tY\n");

    for (x = -5.0; x <= 5.0 + 0.000001; x += 1.0) {
        y = (x < 0) ? -x : x;

        printf("%d\t%.4f\t%.4f\n", i, x, y);
        i++;
    }

    return 0;
}
