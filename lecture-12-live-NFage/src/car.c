#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    int max_speed;
    int hk;
    int acceleration;
    int ccm;
} car_t;

car_t fastest_car(car_t car1, car_t car2);

void print_car(car_t car);
void save_car()

car_t load_car(void);

int main(void){
    car_t c1 = {"Lotus", 200, 110, 8, 1973};
    car_t c2 = {"Mercedes", 215, 160, 9, 4520};

    print_car(c1);
    printf("\n");
    print_car(c2);

    FILE* my_file = fopen("car_file.txt", "w");
    save_car(my_file, c1, c2);

   /* printf("\n");

    car_t fast = fastest_car(c1, c2);

    print_car(fast);

    //car_t my_car = load_car();

    //print_car(my_car);


    return 0;*/
}

void print_car(car_t car){
    char *n = car.name;
    int f = car.max_speed;
    int hest = car.hk;
    int a = car.acceleration;
    int ccm = car.ccm;

    printf("\n Name: %s", n);
    printf("\n Top speed: %d", f);
    printf("\n HK: %d", hest);
    printf("\n Acceleration: %d", a);
    printf("\n CCM: %d\n", ccm);

}

car_t fastest_car(car_t car1, car_t car2){
    int fart1 = car1.max_speed;
    int fart2 = car2.max_speed;

    if(fart1 > fart2){
        return car1;
    } else {
        return car2;
    }
}

car_t load_car(void){
    char name[30];
    int f;
    int hk;
    int acc;
    int ccm;

    //Indlæs fra tastatur.
    printf("Tast et navn: \n");
    scanf("%s", name);
    printf("Tast topfart:\n");
    scanf(" %d", &f);
    printf("Tast hestekrafter:\n");
    scanf(" %d", &hk);
    printf("Tast acceleration:\n");
    scanf(" %d", &acc);
    printf("Tast ccm:\n");
    scanf(" %d", &ccm);

    //Create car and add values
    car_t new_card;
    strcpy(new_card.name, name);
    new_card.max_speed = f;
    new_card.hk = hk;
    new_card.acceleration = acc;
    new_card.ccm = ccm;

    new_card;
}
