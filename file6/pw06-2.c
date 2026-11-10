#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wint_t ch;
    wint_t prev = L'\0';
    int count = 0;

    wprintf(L"Введите текст (для завершения введите #):\n");

    while ((ch = getwchar()) != L'#' && ch != WEOF) {
        if (prev == L'т' && ch == L'о') {
            count++;
        }

        prev = ch;
    }

    wprintf(L"Количество вхождений последовательности «то»: %d\n", count);

    return 0;
}
