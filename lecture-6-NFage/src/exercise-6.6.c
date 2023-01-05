#include <stdio.h>

void converter(double inpusd, double* outeur, double* outdkk, double* outrub, double* outyen) {

    *outeur = inpusd * 0.89;
    *outdkk = inpusd * 6.66;
    *outrub = inpusd * 66.43;
    *outyen = inpusd * 119.9;

}

int main(void) {

    double input_dollar = 0;

    printf("Please input a dollar value\n");
    scanf("%lf", &input_dollar);

    double outeuro = 0;
    double outkroner = 0;
    double outrubler = 0;
    double outyen = 0;

    converter(input_dollar, &outeuro, &outkroner, &outrubler, &outyen);

    printf("%f dollars = %f Euro\n%f dollars = %f Kroner\n%f dollars = %f rubler\n%f 1dollars = %f yen\n",input_dollar,outeuro,input_dollar, outkroner,input_dollar, outrubler,input_dollar,outyen);

    return 0;




}