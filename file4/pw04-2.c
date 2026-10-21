#include <stdio.h>
#include <stdint.h>

int main(void){
    uint8_t a, b;
    float result;

    printf("Введите число от 0 до 255:");

    if (scanf("%hhu %hhu", &a, &b)!=2){
        printf("Ошибка ввода\n");
        return 1;
    }

    result=(float)(a+b)/2;

    printf("Среднее значение: %.2f\n", result);
    printf("Размер uint8_t: %llu байт\n",(unsigned long long)sizeof(uint8_t));
    printf("Размер float: %llu байт\n",(unsigned long long)sizeof(float));
    printf("Размер int: %llu байт\n",(unsigned long long)sizeof(int));

    return 0;
}
