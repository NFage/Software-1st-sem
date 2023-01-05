#include <stdio.h>
#include <math.h>

double distance_of_side(double xA, double yA, double xB, double yB) {
    return sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
}

double circumference_of_square(double x1, double y1, double x2, double y2,
                               double x3, double y3, double x4, double y4) {
    double side1, side2, side3, side4;
    side1 = distance_of_side(x1, y1, x2, y2);
    side2 = distance_of_side(x2, y2, x3, y3);
    side3 = distance_of_side(x3, y3, x4, y4);
    side4 = distance_of_side(x4, y4, x1, y1);
    return side1 + side2 + side3 + side4;
}

int main(void) {
    double x1, x2, x3, x4,
            y1, y2, y3, y4,
            total_length;

    printf("Please write the first point:\n");
    scanf("%lf", &x1);
    scanf("%lf", &y1);

    printf("Please write the second point:\n");
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    printf("Please write the third point:\n");
    scanf("%lf", &x3);
    scanf("%lf", &y3);

    printf("Please write the fourth point:\n");
    scanf("%lf", &x4);
    scanf("%lf", &y4);

    // line segment lengths
    total_length = circumference_of_square(x1, y1, x2, y2, x3, y3, x4, y4);
    printf("The total length is %f\n", total_length);

    return 0;
}

