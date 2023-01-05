#include <stdio.h>

enum planet {merkur, venus, earth, mars, jupiter, saturn, uranus, neptun};
double cir;
char choice;

int main(void){
    printf("Please input the first letter of a planet (mars is w for week)\n");
    scanf("%c", choice)
    return 0;
}

void circumference(enum planet){
    switch (choise) {
        case merkur:
            cir = 15329;
            break;
        case venus:
            cir = 38025;
            break;
        case earth:
            cir = 40075;
            break;
        case mars:
            cir = 21344;
            break;
        case jupiter:
            cir = 439264;
            break;
        case saturn:
            cir = 378675;
            break;
        case uranus:
            cir = 160590;
            break;
        case neptun:
            cir = 155600;
            break;
    }
}
