#include <stdio.h>
#include <malloc.h>

enum farve {Kloer, Ruder, Hjerter, Spar};
typedef enum farve Farve;

enum vaerdi {En, To, Tre, Fire, Fem, Seks, Syv, Otte, Ni, Ti, Knaegt, Dronning, Konge, Es};
typedef enum vaerdi Vaerdi;

typedef struct kort{
    Farve c_farve;
    Vaerdi c_vaerdi;
}kort;

void lavKort(struct kort kort, enum farve Farve, enum vaerdi Vaerdi){
    struct kort *nyt = malloc(sizeof(kort));
    for(int i = 0; i < 4 ; ++i) {
        for (int j = 0; j < 13; ++j) {
        nyt->c_farve = ;
        }
        nyt->c_farve = Farve;
    }
}


int main(void){
    return 0;
}








