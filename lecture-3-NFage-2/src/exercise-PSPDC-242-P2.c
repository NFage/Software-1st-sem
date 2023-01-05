#include <stdio.h>

void brightness(int);

int main(void) {
    int watts;
    printf("Input watts");
    scanf("%d", &watts);

    brightness(watts);
}

void brightness(int watts){
    if(watts <= 100){
        if(watts <= 75){
            if(watts <= 60){
                if(watts <= 40){
                    if(watts <= 25){
                        if(watts <= 15){

                        }
                    }
                }
            }

        }
        printf("125 Lumen");
    }
}