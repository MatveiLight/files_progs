#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    int squareCount = 0;
    int otherCount = 0;
    double squareSum = 0.0;
    double otherSum = 0.0;

    printf("Введите целые числа (0 для завершения):\n");

    while (scanf("%d", &n) == 1 && n != 0) {
        int root = (int)sqrt((double)n);

        if (n > 0 && root * root == n) {
            squareCount++;
            squareSum += n;
        } else {
            otherCount++;
            otherSum += n;
        }
    }

    printf("\nПолные квадраты: %d\n", squareCount);

    if (squareCount > 0) {
        printf("Среднее арифметическое: %.2f\n",
               squareSum / squareCount);
    }

    printf("\nОстальные числа: %d\n", otherCount);

    if (otherCount > 0) {
        printf("Среднее арифметическое: %.2f\n",
               otherSum / otherCount);
    }

    return 0;
}
