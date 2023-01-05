//
// Created by Bruger on 22/09/2022.
//
#include <stdio.h>

int f_primes(int user_input) {
    int i, number, count;
    printf("Input a positive integer.\n");
    scanf("%d", &user_input);
    printf("Prime number from 1 to %d are: \n", user_input);

    for (number = 1; number <= user_input; number++){
        count = 0;
        for (i = 2; i <= number/2; i++){
            if (number % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0 && number != 1){
            printf("%d\n", number);
        }
    }
    return 0;
}

int main(void){
    f_primes(100);
    return 0;
}