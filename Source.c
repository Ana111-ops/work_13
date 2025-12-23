#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    char text[50];
    char res[50] = "";

    printf("Введите предложение: ");
    fgets(text, sizeof(text), stdin);


    int count = 0;
    char* part = strtok(text, " ");

    while (part != NULL) {
        count++;

        strcat(res, part);

        if (count == 2) {
            strcat(res, "!");
        }

        part = strtok(NULL, " ");
        if (part != NULL) {
            strcat(res, " ");
        }
    }

    printf("Результат: %s\n", res);

    return 0;
}