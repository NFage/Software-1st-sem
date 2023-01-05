#include <stdio.h>

int quotient(int dividend, int divisor, int i){
    if(dividend >= divisor){
        return quotient(dividend - divisor, divisor, ++i);
    }
    else {
        return i;
    }
}

int modulus(int dividend, int divisor){
    //int sum = dividend % divisor;
    if(dividend - divisor >= 0) {
        return modulus(dividend - divisor, divisor);
    } else {
        return dividend;
    }
}

int main(void)
{
    int rest = modulus(28,7);
    printf("The rest is %d\n", rest);

    int div = quotient(21,5,0);
    printf("The div is %d\n", div);

    // consider implementing the functions in a library
    // and add tests to check that yours function works correctly
}