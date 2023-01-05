#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <nmsupp.h>

void upper(char*);

int main(void){
    upper("TEST");
    return 0;
}

void upper(char* word){
    char *str = word;
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(islower(str[i]) == 0) {
            counter += 1;
        }
    }
    printf("%d", counter);
}