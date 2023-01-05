#include <stdio.h>

int main(void){
    return 0;

}


/*
typedef struct car_t {
    char[30] name;
    int max_speed;
    int hk;
    int acceleration;
    int ccm;
};

struct car_t fastest(struct car_t a1, struct car_t a2){
    if(a1.max_speed >= a2.max_speed)
        return a1;
    else
        return a2;
}

void print_car(struct car_t acar){
    printf("")
}

void double_speed(struct car_t* dcar){
    dcar->max_speed = dcar->max_speed * 2;
}

int main(void)
{
    struct car_t b1 = {
        .name = "Lotus",
        .max_speed = 200,
        .hk = 110,
        .acceleration = 8,
        .ccm = 1973,
    };

    struct car_t b2 = {
            .name = "Mercedes",
            .max_speed = 215,
            .hk = 160,
            .acceleration = 8,
            .ccm = 1973,
    };

    struct car_t fast_car = fastest(b1, b2);

    printf("Got cars: \n");
    print_car(b1);
    print_car(b2);

    double_speed(&b1);
    printf("Fastests:\n");
    print_car(b1);

    printf("")
} */