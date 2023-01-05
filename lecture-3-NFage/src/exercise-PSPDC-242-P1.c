#include <stdio.h>


int main(void) {
    int watts, lumen;
    printf("Input Watt.\n", watts);
    scanf("%d", &watts);
    printf("You input %d Watts.\n", watts);

    switch (watts) {
        case 15:
            lumen = 125;
            break;
        case 25:
            lumen = 215;
            break;
        case 40:
            lumen = 500;
            break;
        case 60:
            lumen = 880;
            break;
        case 75:
            lumen = 1000;
            break;
        case 100:
            lumen = 1675;
            break;
        default:
            lumen = -1;
    }

    printf("That will generate %d lumen", lumen);
    
}