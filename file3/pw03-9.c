
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t codename[100];

    wprintf(L"Введите позывной: ");

    if (wscanf(L"%99ls", codename) == 1) {
        wprintf(L"Агент %ls авторизован в системе\n", codename);
    } else {
        wprintf(L"Ошибка ввода\n");
        return 1;
    }

    return 0;
}
