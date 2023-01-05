#include <stdio.h>

typedef struct fraction {
    int x;
    int y;
} fraction;

void reduction(fraction num1, fraction num2);
void multiplication(fraction num1, fraction num2);
void add(fraction num1, fraction num2);

int main(void) {
    fraction num1 = {6, 10};
    fraction num2 = {12, 20};

    printf("The fraction is %d/%d\n", num1.x, num1.y);
    reduction(num1, num2);
    multiplication(num1, num2);
    add(num1, num2);
}

void reduction(fraction num1, fraction num2){
    int holder;
    num1.x = num1.x * 3;
    for (int i = num1.x; i > 1 ; --i) {
        if(num1.x % i == 0 && num1.y % i == 0){
            holder = i;
            break;
        }
    }
    int new_x = num1.x / holder;
    int new_y = num1.y / holder;
    printf("%d/%d\n", new_x, new_y);
}

void multiplication(fraction num1, fraction num2){
    int newnew_x;
    int newnew_y;

    newnew_x = num1.x * num2.x;
    newnew_y = num1.y * num2.y;

    int holder;
    for (int i = newnew_x; i > 1 ; --i) {
        if(newnew_x % i == 0 && newnew_y % i == 0){
            holder = i;
            break;
        }
    }
    int new_x = newnew_x / holder;
    int new_y = newnew_y / holder;
    printf("%d/%d\n", new_x, new_y);

}

void add(fraction num1, fraction num2){
    int newnew2_x;
    int newnew2_y;

    newnew2_x = num1.x * num2.y;
    newnew2_y = num1.y * num2.x;
    int newnew2_yy = num1.y * num2.y;
    newnew2_x = newnew2_x + newnew2_y;

    int holder;
    for (int i = newnew2_x; i > 1 ; --i) {
        if(newnew2_x % i == 0 && newnew2_yy % i == 0){
            holder = i;
            break;
        }
    }
    int new_x = newnew2_x / holder;
    int new_y = newnew2_yy / holder;
    printf("%d/%d\n", new_x, new_y);

}