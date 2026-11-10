#include <stdio.h>

int main(void) {
    int choice;
    double sum;
    double percent;

    while (1) {
        printf("\n=== ФИНАНСОВЫЙ КАЛЬКУЛЯТОР ===\n");
        printf("1. Процент от суммы\n");
        printf("2. Сумма с НДС 20%%\n");
        printf("3. Сумма без НДС 20%%\n");
        printf("4. Чаевые 10%%\n");
        printf("5. Выход\n");
        printf("Выберите пункт: ");

        if (scanf("%d", &choice) != 1) {
            printf("Некорректный ввод!\n");
            return 0;
        }

        if (choice < 1 || choice > 5) {
            printf("Ошибка! Выберите пункт от 1 до 5.\n");
            continue;
        }

        if (choice == 5) {
            printf("Выход из программы.\n");
            break;
        }

        printf("Введите сумму: ");
        if (scanf("%lf", &sum) != 1 || sum < 0) {
            printf("Некорректная сумма!\n");
            return 0;
        }

        switch (choice) {
            case 1:
                printf("Введите процент: ");
                scanf("%lf", &percent);

                printf("Результат: %.2f\n",
                       sum * percent / 100.0);
                break;

            case 2:
                printf("Сумма с НДС: %.2f\n",
                       sum * 1.20);
                break;

            case 3:
                printf("Сумма без НДС: %.2f\n",
                       sum / 1.20);
                break;

            case 4:
                printf("Чаевые: %.2f\n", sum * 0.10);
                printf("Итого с чаевыми: %.2f\n",
                       sum * 1.10);
                break;
        }
    }

    return 0;
}
