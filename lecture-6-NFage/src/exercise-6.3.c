#include <stdio.h>

void USDconverter(int inputUSD, int* usd10, int* usd20, int* usd50, int* usd100){

    int currentUSD = inputUSD;

    *usd100 = currentUSD / 100;
    currentUSD -= *usd100 * 100;
    *usd50 = currentUSD / 50;
    currentUSD -= *usd50 * 50;
    *usd20 = currentUSD / 20;
    currentUSD -= *usd20 * 20;
    *usd10 = currentUSD / 10;

}

int main(void) {

    int inputUSD = 0;

    int output10USD = 0;
    int output20USD = 0;
    int output50USD = 0;
    int output100USD = 0;


    printf("Please input your dollar amount");
    scanf("%d",&inputUSD);

    while(inputUSD % 10 != 0) {
        printf("Your input was incorrect, try again");
        scanf("%d",&inputUSD);
    }

    USDconverter(inputUSD, &output10USD, &output20USD, &output50USD, &output100USD);

    printf("%d dollars should be handed out as:\nammount of 100 dollar bills = %d\nammount of 50 dollar bills = %d\nammount of 20 dollar bills = %d\nammount of 10 dollar bills = %d"
            ,inputUSD,output100USD,output50USD,output20USD,output10USD);


    return 0;
}