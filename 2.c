//2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#define ENGLISH_D 2.54          // àíãë äþéì
#define SPANISH_D 2.32166       // èñï äþéì 
#define OLD_LITHUANIAN_D 2.7076 // ñòàð äþéì

int main() {
    setlocale(LC_CTYPE, "RUS");
    int dym;
    float result;
    int choice;

    printf("Âûáåðèòå òèï äþéìà:\n");
    printf("1 - Àíãëèéñêèé äþéì (2.54 ñì)\n");
    printf("2 - Èñïàíñêèé äþéì (2.32166 ñì)\n");
    printf("3 - Ñòàðîëèòîâñêèé äþéì (2.7076 ñì)\n");
    printf("Âàø âûáîð: ");
    scanf("%d", &choice);

    printf("Ââåäèòå êîëè÷åñòâî äþéìîâ: ");
    scanf("%d", &dym);

    if (choice == 1) {
        result = ENGLISH_D * dym;
        printf("%d àíãëèéñêèõ äþéìîâ - ýòî %.2f ñì\n", dym, result);
    }
    else if (choice == 2) {
        result = SPANISH_D * dym;
        printf("%d èñïàíñêèõ äþéìîâ - ýòî %.2f ñì\n", dym, result);
    }
    else if (choice == 3) {
        result = OLD_LITHUANIAN_D * dym;
        printf("%d ñòàðîëèòîâñêèõ äþéìîâ - ýòî %.2f ñì\n", dym, result);
    }
    else {
        printf("Îøèáêà: íåâåðíûé âûáîð!\n");
    }

    return 0;
}
