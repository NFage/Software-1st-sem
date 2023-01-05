#include <stdio.h>
#include <math.h>

double r, x, y; // r = radius, (x,y) er punkter i et koordinatsystem.
// distance = sqrt(pow(x - cx), 2 + pow(y-cy,2));

// cirklen udgangspunkt er (0.0)

int main(void) {
    printf("Enter the coordinates for (x,y). %d%d\n", x, y);
    scanf("%d%d", &x, &y);
    printf("The coordinates are (%d,%d).\n", x, y);

    printf("Enter the length of the radius.%d\n", r);
    scanf("%d", &r);
    printf("The length of the radius is: %d\n", r);

    int distance = sqrt( pow( (x - 0), 2 ) + pow( (y - 0), 2 ) );

    if(distance < r){
        printf("The point (%d,%d) is within the circle.", x,y);
    }
    else if(distance > r){
        printf("The point (%d,%d) is outside the circle.", x,y);
    }
    else {
        printf("The point (%d,%d) on the edge of the circle.", x,y);
    }
}