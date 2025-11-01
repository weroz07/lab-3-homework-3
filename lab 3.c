//2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#define ENGLISH_D 2.54          // англ дюйм
#define SPANISH_D 2.32166       // исп дюйм 
#define OLD_LITHUANIAN_D 2.7076 // стар дюйм

int main() {
    setlocale(LC_CTYPE, "RUS");
    int dym;
    float result;
    int choice;

    printf("Выберите тип дюйма:\n");
    printf("1 - Английский дюйм (2.54 см)\n");
    printf("2 - Испанский дюйм (2.32166 см)\n");
    printf("3 - Старолитовский дюйм (2.7076 см)\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    printf("Введите количество дюймов: ");
    scanf("%d", &dym);

    if (choice == 1) {
        result = ENGLISH_D * dym;
        printf("%d английских дюймов - это %.2f см\n", dym, result);
    }
    else if (choice == 2) {
        result = SPANISH_D * dym;
        printf("%d испанских дюймов - это %.2f см\n", dym, result);
    }
    else if (choice == 3) {
        result = OLD_LITHUANIAN_D * dym;
        printf("%d старолитовских дюймов - это %.2f см\n", dym, result);
    }
    else {
        printf("Ошибка: неверный выбор!\n");
    }

    return 0;
}
