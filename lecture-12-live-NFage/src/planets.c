#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265

typedef struct
{
    char name[30];
    double volume;
    double mass;
    double radius;
} planet_t;

void print_planet(planet_t p);
void write_planets_to_file(planet_t* planets, int number_of_planets, FILE *fp);
void read_planets_from_file(planet_t planets, int number_of_planets, FILE *fp);

int main(void)
{
    FILE *planets_file = fopen("planets_list.txt", "w");
    planet_t planets[2] = {
            {"Earth", 12756/2, 1.08e12, 5.97e24},
            {"Mars", 6792/2, 1.63e11, 6.42e23}
    };

    print_planet(planets[0]);
    print_planet(planets[1]);

    write_planets_to_file(planets, 2, planets_file);
    fclose(planets_file);
    return 0;
}

void write_planets_to_file(planet_t* planets, int number_of_planets, FILE *fp)
{
    for (int i = 0; i < number_of_planets; ++i) {
        fprintf(fp, "%s ",planets[i].name);
        fprintf(fp, "%f ",planets[i].volume);
        fprintf(fp, "%f ",planets[i].mass);
        fprintf(fp, "%f ",planets[i].radius);
        fprintf(fp, "%c",'\n');
    }
}
/*
void read_planets_from_file(planet_t* planets, int number_of_planets, FILE *fp)
{
    fscanf(fp, "%s ", &planets[i])


    // new_planet.volumen =(4.0/3.0)PIpow(new_planet.radius,3);
}*/

void print_planet(planet_t p)
{
    char *n = p.name;
    double v = p.volume;
    double m = p.mass;
    double r = p.radius;

    printf("\n Name: %s", n);
    printf("\n Volume: %lf", v);
    printf("\n Mass: %lf", m);
    printf("\n Radius: %lf", r);
}