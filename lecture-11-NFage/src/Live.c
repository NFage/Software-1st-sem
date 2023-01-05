#include <stdio.h>
#include <stdlib.h>

int powerof(int, int);

int main(void){
    powerof(3, 3);
    // consider implementing the functions in a library
    // and add tests to check that yours function works correctly
}

int isodd(int number){
    return number % 2;
}

int powerof(int tal, int potens){
    if(potens == 0){
        return 1;
    }
    else {
        if(isodd(potens)){
            return tal * powerof(tal, potens -1);
        }
        else {
            int value = powerof(tal, potens / 2);
            return value * value;
        }
    }
}