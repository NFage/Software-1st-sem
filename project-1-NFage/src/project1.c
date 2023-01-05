#include <stdio.h>
#include <math.h>

double run_calculator(void);
void scan_data(char *operator, double *operand);
void do_next_op(char operator, double operand, double *accumulator);
int is_operator_binary(char operator);

int main(void){
    printf("Final result: %lf", run_calculator());
    return 0;
}

double run_calculator(void) {
    double accumulator;
    char operator;
    double right_operand;
    
    do {
        scan_data(&operator, &right_operand);
        do_next_op(operator, right_operand, &accumulator);
        if('q' != operator) printf("Accumulator is at: %lf\n", accumulator);
    } while ('q' != operator);
    return accumulator;
}

void scan_data(char *operator, double *operand) {
    printf("Enter operator and a number:");
    scanf(" %c", operator);
    if(is_operator_binary(*operator) == 1){
        scanf(" %lf", operand);
    }
}

void do_next_op(char operator, double operand, double *accumulator) {
    switch (operator) {
        case '+':
            *accumulator += operand;
            break;
        case '-':
            *accumulator -= operand;
            break;
        case '*':
            *accumulator *= operand;
            break;
        case '/':
            if(operand == 0) break;
            *accumulator /= operand;
            break;
        case '^':
            *accumulator = pow(*accumulator, operand);
            break;
        case '#':
            if(*accumulator < 0) break;
            *accumulator = sqrt(*accumulator);
            break;
        case '%':
            *accumulator *= -1;
            break;
        case '!':
            if(*accumulator == 0) break;
            *accumulator = 1 / *accumulator;
            break;
        default:
            break;
    }
}

int is_operator_binary(char operator) {
    switch (operator) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            return 1;
        default:
            return 0;
    }
}


























