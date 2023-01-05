
#include <stdio.h>

void brightness(int);

int main(void) {
    int watts;
    printf("input watts as an integer.\n");
    scanf("%d", &watts);

    brightness(watts);
}

void brightness(int watts){
    switch (watts) {
        case 15:
            printf("Brightness = 125 Lumen");
            break;
        case 25:
            printf("Brightness = 215 Lumen");
            break;
        case 40:
            printf("Brightness = 500 Lumen");
            break;
        case 60:
            printf("Brightness = 880 Lumen");
            break;
        case 75:
            printf("Brightness = 1000 Lumen");
            break;
        case 100:
            printf("Brightness = 1675 Lumen");
    }

    }
