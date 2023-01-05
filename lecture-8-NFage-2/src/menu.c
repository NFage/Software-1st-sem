#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define RAND_MEAL 4


enum forret_e {guacamole = 0, tarteletter = 1, lakserulle = 2, graeskarsuppe = 3};
enum hovedret_e {gyldenkaal = 0, hakkeboef = 1, gullash = 2, forloren_hare = 3};
enum dessert_e {pandekager_med_is = 0, gulerodskage = 1, chokolademousse = 2, citronfromage = 3 };



void maaltid();

void maaltidNavn(int mad, int nr);

int main(void)
{
    maaltid();

    return 0;
}

void maaltid(){
    srand(time(NULL));



    for(int i = 1; i < 26; i++){
        printf("\nRet %d:\n",i);
        for(int q = 0; q < 1; q++){
            enum forret_e temp1 = rand() % RAND_MEAL;
            enum hovedret_e temp2 = rand() % RAND_MEAL;
            enum dessert_e temp3 = rand() % RAND_MEAL;

            switch (temp1) {
                case guacamole:
                    printf("Forret: guacamole\n");
                    break;
                case tarteletter:
                    printf("Forret: tarteletter\n");
                    break;
                case lakserulle:
                    printf("Forret: lakserulle\n");
                    break;
                case graeskarsuppe:
                    printf("Forret: graeskarsuppe\n");
                    break;
            }

            switch (temp2) {
                case gyldenkaal:
                    printf("Hovedret: Gyldenkaal\n");
                    break;
                case hakkeboef:
                    printf("Hovedret: Hakkeboef\n");
                    break;
                case gullash:
                    printf("Hovedret: Gullash\n");
                    break;
                case forloren_hare:
                    printf("Hovedret: Forloren Hare (AD)\n");
                    break;
            }

            switch (temp3) {
                case pandekager_med_is:
                    printf("Dessert: Pandekager med is\n");
                    break;
                case gulerodskage:
                    printf("Dessert: Gulerodskage\n");
                    break;
                case chokolademousse:
                    printf("Dessert: Chokolademousse\n");
                    break;
                case citronfromage:
                    printf("Dessert: Citronfromage\n");
                    break;

            }

        }
    }


}

