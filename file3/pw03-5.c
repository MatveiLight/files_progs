
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    scanf(" %c", &ch);

    printf("CODE_DEC: %d\n", (unsigned char)ch);
    printf("CODE_HEX: %x\n", (unsigned char)ch);
    printf("CODE_OCT: %o\n", (unsigned char)ch);

    printf("UPPER: %c\n", (char)toupper((unsigned char)ch));
    printf("NEXT: %c\n", (char)(ch + 1));
    printf("PREV: %c\n", (char)(ch - 1));

    return 0;
}
