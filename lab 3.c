//4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    float speed;
    int type;

    printf("1 - Ѕит/с в  байт/с\n");
    printf("2 -  байт/с в Ѕит/с\n");
    printf("¬ыберите: ");
    scanf("%d", &type);

    if (type == 1) {
        printf("¬ведите Ѕит/с: ");
        scanf("%f", &speed);
        printf("–езультат: %.2f  байт/с\n", speed / 8192);
    }
    else if (type == 2) {
        printf("¬ведите  байт/с: ");
        scanf("%f", &speed);
        printf("–езультат: %.2f Ѕит/с\n", speed * 8192);
    }
    else {
        printf("ќшибка!\n");
    }

    return 0;
}