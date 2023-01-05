#include <stdio.h>
#include <stdlib.h>



/*int arraySum(int* array){
    int i;
    int sum = 0;
    sum += array[i] + array[i+1];
    i++;
    if (i < 10){
        arraySum(array);
    }
}

int main(void){
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    arraySum();
    return 0;
}*/


int calc_sum(int* array, int i, int end){
    if(i < end) {
        return 0;
    }
    else {
        int sum = array[i] + calc_sum(array, i + 1, end);
        return sum;
    }
}

int main(void){
    int test[5] = {1,1,1,1,1};
    int start = 0;
    int end = 5;
    int sum = calc_sum(test, start, end);

    printf("%d", sum);
    return 0;
}