//1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, num2;

    printf("введите число\n");
    scanf("%d", &num);
    printf("Введено число %d\n", num);

    printf("введите второе число\n");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);

    printf("Сумма: %d\n", num + num2);
    printf("Разность: %d\n", num - num2);
    printf("Произведение: %d\n", num * num2);
    printf("Частное: %d\n", num2 / num);
    printf("Остаток: %d\n", num2 % num);

    return 0;
}
