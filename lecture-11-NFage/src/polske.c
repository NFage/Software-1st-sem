#include <stdio.h>
#include <stdlib.h>

// altså (operator tal tal)

int calc() {
    char c;
    char operator;
    int value = 0;
    int value2 = 0;
    scanf("%c", &c);
    switch (c) {
        case '+':
            value = calc();
            value2 = calc();
            return value + value2;
        case '*':
            value = calc();
            value2 = calc();
            return value * value2;
        case '/':
            value = calc();
            value2 = calc();
            return value / value2;
        case '(':
            value = calc();
            scanf(" %c", &c);
            if (c != ')') {
                printf("Missing end )\n");
                exit(EXIT_FAILURE);
            }
        case ' ':
            return calc();
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        default:
            printf("Unknown character '%c'\n", c);
    }
}

int main(void) {
    int result = calc();
    printf("The result is %d\n", result);
    return 0;
}