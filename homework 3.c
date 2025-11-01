//4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    float speed;
    int type;

    printf("1 - Áèò/ñ â Êáàéò/ñ\n");
    printf("2 - Êáàéò/ñ â Áèò/ñ\n");
    printf("Âûáåðèòå: ");
    scanf("%d", &type);

    if (type == 1) {
        printf("Ââåäèòå Áèò/ñ: ");
        scanf("%f", &speed);
        printf("Ðåçóëüòàò: %.2f Êáàéò/ñ\n", speed / 8192);
    }
    else if (type == 2) {
        printf("Ââåäèòå Êáàéò/ñ: ");
        scanf("%f", &speed);
        printf("Ðåçóëüòàò: %.2f Áèò/ñ\n", speed * 8192);
    }
    else {
        printf("Îøèáêà!\n");
    }

    return 0;
}
