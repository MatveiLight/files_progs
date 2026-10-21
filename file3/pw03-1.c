
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "SibSUTIS";
    char str2[20] = "СибГУТИ";

    printf("String: SibSUTIS\n");
    printf("SIZEOF: %zu\n", sizeof(str1));
    printf("STRLEN: %zu\n", strlen(str1));
    printf("FREE_BYTES: %zu\n\n",
           sizeof(str1) - strlen(str1) - 1);

    printf("String: СибГУТИ\n");
    printf("SIZEOF: %zu\n", sizeof(str2));
    printf("STRLEN: %zu\n", strlen(str2));
    printf("FREE_BYTES: %zu\n",
           sizeof(str2) - strlen(str2) - 1);

    return 0;
}
