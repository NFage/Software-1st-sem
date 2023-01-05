#include <stdio.h>

int main(void)
{
    double population, target, years, growth;
    population = 9870;
    target = 30000;
    years = 0;
    growth = 1.1; // equal to a ten percent growth per year.

    while(population <= target) {
        double new_population = population * growth;
        population = new_population;
        years++;
        //printf("The population is %f, after %f years.\n", population, years);
    }
    printf("The population is %f, after %f years.\n", population, years);

    return 0;
}
