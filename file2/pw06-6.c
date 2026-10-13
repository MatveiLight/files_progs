#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int input;
    uint8_t value;

    scanf("%d", &input);
    value = (uint8_t)input;

    value = (uint8_t)(input + 10);
    printf("ADD: %u\\n", (unsigned int)value);

    value = (uint8_t)(input * 2);
    printf("MUL2: %u\\n", (unsigned int)value);

    value = (uint8_t)(input * input);
    printf("SQR: %u\\n", (unsigned int)value);

    return 0;
}
