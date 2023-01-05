#include <stdio.h>

int main(void)
{
    float first_number, second_number, third_number;

    printf("Give me three: ");
    scanf("%f %f %f", &first_number, & second_number, & third_number);
    printf("The result: %f\n", (first_number + second_number + third_number) / 3.0);

    return 0;
}