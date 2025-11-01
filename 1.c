//1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, num2;

    printf("ââåäèòå ÷èñëî\n");
    scanf("%d", &num);
    printf("Ââåäåíî ÷èñëî %d\n", num);

    printf("ââåäèòå âòîðîå ÷èñëî\n");
    scanf("%d", &num2);
    printf("Ââåäåíî ÷èñëî %d\n", num2);

    printf("Ñóììà: %d\n", num + num2);
    printf("Ðàçíîñòü: %d\n", num - num2);
    printf("Ïðîèçâåäåíèå: %d\n", num * num2);
    printf("×àñòíîå: %d\n", num2 / num);
    printf("Îñòàòîê: %d\n", num2 % num);

    return 0;
}
