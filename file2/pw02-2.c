#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int first, second;
    bool MODULE_READY, FAULT_STATE;

    scanf("%d %d", &first, &second);

    MODULE_READY = first;
    FAULT_STATE = second;

    printf("MODULE_READY: %d\\n", MODULE_READY);
    printf("FAULT_STATE: %d\\n", FAULT_STATE);
    printf("BOOL_SIZE: %zu\\n", sizeof(bool));
    printf("FLAGS_SUM: %d\\n", MODULE_READY + FAULT_STATE);

    return 0;
}
