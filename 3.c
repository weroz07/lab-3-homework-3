//3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b;

    printf("Ââĺäčňĺ a: ");
    scanf("%lf", &a);
    printf("Ââĺäčňĺ b: ");
    scanf("%lf", &b);

    double mul = a * b;
    double sum = a + b;
    double sub = a - b;

    printf("-------------------------\n");
    printf("| a * b  | a+b   | a-b  |\n");
    printf("-------------------------\n");
    printf("| %.0f * %.0f | %.0f+%.0f | %.0f-%.0f |\n", a, b, a, b, a, b);
    printf("| %-7.2f| %-6.2f| %-6.2f|\n", mul, sum, sub);
    printf("-------------------------\n");

    return 0;
}
