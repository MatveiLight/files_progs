
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    const char str[] = "Сбой матрицы";
    const wchar_t wstr[] = L"Сбой матрицы";

    printf("char -> sizeof: %zu bytes, strlen: %zu bytes\n",
           sizeof(str), strlen(str));

    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",
           sizeof(wstr), wcslen(wstr));

    return 0;
}
