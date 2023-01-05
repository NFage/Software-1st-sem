#include <stdio.h>

int sum_iter(int n) {
    int i, sum = 0;

    printf("Enter positive integer.\n");

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}

int sum_formula(int n) {
    int result;

    result = ((n + 1) * (n / 2));

    printf("Result = %d\n", result);

    return 0;
}

double population_projection(double population, double target_pop, double growth) {
    int years = 0;

    while (population <= target_pop) {
        double new_population = population * growth;
        population = new_population;
        years++;
    }
    printf("The population is %f, after %d years.\n", population, years);

    return 0;
}


int main(void) {
    sum_iter(9);
    sum_formula(9);
    population_projection(9870, 30000, 1.5);

    return 0;
}