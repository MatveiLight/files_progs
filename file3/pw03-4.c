
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%s", str);
    printf("STRLEN: %zu\n", strlen(str));
    printf("SIZEOF: %zu\n", sizeof(str));

    return 0;
}
