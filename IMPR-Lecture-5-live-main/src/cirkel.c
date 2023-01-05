#include <math.h>
#include <stdio.h>


double circle_circumference(double radius) {
    return 2 * M_PI * radius;
}

double circle_area(double radius) {
    return M_PI * pow(radius, 2);
}

int main(void) {
    double radius;
    double area;
    int decision;

    printf("Input radius> ");
    scanf(" %lf", &radius);
    printf("\nGot radius %lf\n", radius);

    printf("type 1 for area and 2 for cir.");
    scanf("%d", &decision);


    double circumference = circle_circumference(radius);
    double size = circle_area(radius);

    if (decision == 2) {
        circle_circumference(radius);
        printf("The circumference is %f\n", circumference);
    } else if (decision == 1) {
        circle_area(radius);
        printf("The area is %f\n", size);
    } else printf("Wrong input");


    //printf("The circumference is %f\n", circumference);
    //printf("The area is %f\n", size);

    return 0;
}
