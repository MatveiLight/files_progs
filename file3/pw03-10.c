
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t module1[100];
    wchar_t module2[100];
    wchar_t module3[100];

    if (wscanf(L"%99ls %99ls %99ls",
               module1, module2, module3) != 3) {
        wprintf(L"Ошибка ввода\n");
        return 1;
    }

    wprintf(L"%-15ls|%20ls|%.5ls\n",
            module1, module2, module3);

    return 0;
}
