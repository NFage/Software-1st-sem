#include <stdio.h>

double ly, wy, lh, wh;
double sps = 0.2;

int main(void) {
    printf("Please enter yard length.\n");
    scanf("%lf", &ly);

    printf("please enter yard width.\n");
    scanf("%lf", &wy);

    printf("Please enter house length.\n");
    scanf("%lf", &lh);

    printf("PLease enter house width.\n");
    scanf("%lf", &wh);

    double yard_size = ((ly * wy) - (lh * wh)); // Calculate the size of the yard.

    printf("Your yard is: %lf square meters.\n", yard_size);

    double duration = yard_size / sps; //Calculate the seconds needed to mow the lawn.
        double minuts = duration / 60;
            double hours = minuts / 60; //Det her kan man naturligvis gøre pænere, men det ville jo nærmest være afleverings opgaven.
    printf("It will take you %lf hours", hours);
}