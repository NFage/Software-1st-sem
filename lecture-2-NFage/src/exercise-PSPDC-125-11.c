#include <stdio.h>
#include <math.h>
// SIDE1 = m^2-n^2
// SIDE2 = 2mn
// HYPOTENUSE = m^2+n^2


int main(void) {
    double m, n;

    printf("Input the value for m and n as positive integers where m > n: \n");

    scanf("%lf %lf", &m, &n);

    printf("m and n are : %f %f\n", m, n);
    printf("side1 = %f\n", ((m*m)-(n*n)));
    printf("side2 = %f\n", (2*(m*n)));
    printf("hypotenuse = %f\n", ((m*m)+(n*n)));

    return 0;
}