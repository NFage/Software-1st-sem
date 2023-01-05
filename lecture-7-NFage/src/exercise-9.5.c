#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

#define RAND_MAX 100


int compare (const void * a, const void * b)
{
    double fa = *(const double*) a;
    double fb = *(const double*) b;
    return (fa > fb) - (fa < fb);
}

int main(void){
    double* randomplac = malloc(sizeof(double)*100);
    srand(clock());


    for (int i=0; i < RAND_MAX; i++) {
        double random = (double) rand() / RAND_MAX;
        randomplac[i] = random;
        printf("Number %d = %lf\n",i+1, randomplac[i]);
    }
    printf("\n");

    qsort(randomplac, RAND_MAX, sizeof(double), compare );
    for (int i=0; i < RAND_MAX; i++) {
        printf("Number %d = %lf\n",i+1, randomplac[i]);
    }


    free(randomplac);

    return 0;
}