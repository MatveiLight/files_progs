#include <stdio.h>

int main(void)
{
    int UNIT_ID, UNIT_VERSION, UNIT_STATUS;
    int sum;

    scanf("%d %x %o", &UNIT_ID, &UNIT_VERSION, &UNIT_STATUS);

    sum = UNIT_ID + UNIT_VERSION + UNIT_STATUS;

    printf("UNIT_ID: %d\\n", UNIT_ID);
    printf("UNIT_VERSION: %d\\n", UNIT_VERSION);
    printf("UNIT_STATUS: %d\\n", UNIT_STATUS);
    printf("SUM: %d\\n", sum);

    return 0;
}
