#include <stdio.h>

#define NUMBER_OF_GOODS 3

void print_prices(int *x, double *y);

int* dynamic_stack_allocation(int amount_to_allocate) {
    int my_array[amount_to_allocate];
    return my_array;
}

int main(void) {
    int i;
    int price;
    int prices[NUMBER_OF_GOODS];
    double discounts[NUMBER_OF_GOODS];
    double sum = 0;


    for (i = 0; i < NUMBER_OF_GOODS; ++i) {
        printf("Input price of item number %d: ", i);
        scanf(" %d", &price);
        prices[i] = price;

        //
        printf("Input discount of item number %d: ", i);
        scanf(" %lf", &discounts[i]);
    }

    print_prices(prices, discounts);

    for (i = 0; i < NUMBER_OF_GOODS; ++i) {
        sum = sum + prices[i] * (1.0 - discounts[i]);
    }

    printf("The total is: %lf\n", sum);

    return 0;
}




void print_prices(int *x, double *y) {
    int i;
    for (i = 0; i < NUMBER_OF_GOODS; ++i) {
        printf("Item number %d: ", i);
        printf("%d", x[i]);
        printf(" has discount of %lf\n", y[i]);
    }
}

