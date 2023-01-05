#include <stdio.h>
#include <math.h>

#define DELTA 2

void in_out(double, double, double);

int main(void) {
    double r, x, y;
    printf("Input radius.\n");
    scanf("%lf", &r);

    printf("Input x and y coordinates (x y).\n");
    scanf("%lf%lf",&x, &y);

    printf("Radius = %lf, x = %lf, y = %lf.\n", r,x,y);

    in_out(r,x,y);
    return 0;
}

void in_out(double r, double x, double y){
    double distance;
    distance = sqrt( pow( (x - 0), 2 ) + pow( (y - 0), 2 ) );

    if(distance < (r - DELTA)){
        printf("The coordinates are within the circle.\n");
    } else if (distance > (r + DELTA)){
        printf("The coordinates are outside the circle.\n");
    } else if (distance == distance + DELTA || distance == distance - DELTA){
        printf("The coordinates are on the edge of the circle.\n");
    }
}