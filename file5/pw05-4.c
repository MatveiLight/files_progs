#include <stdio.h>
#include <math.h>

int main(void) {
    double arr[8];
    int count = 0;

    printf("Введите 8 чисел:\n");

    for (int i = 0; i < 8; i++) {
        scanf("%lf", &arr[i]);
    }

    printf("Исходный массив:\n");

    for (int i = 0; i < 8; i++) {
        printf("%.2f ", arr[i]);

        if (fabs(fmod(arr[i], 2.0)) < 0.000001) {
            count++;
        }
    }

    printf("\nКоличество четных чисел: %d\n", count);

    return 0;
}
