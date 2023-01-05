#include <stdio.h>

void hours_minutes_seconds(int sek, int* nysek, int* min, int* timer){

    *min = sek / 60;
    *nysek = sek % 60;

    *timer = *min / 60;
    *min = *min % 60;

}

int main(void) {

    int sekunder = 0;
    int nysekunder = 0;
    int minnuter = 0;
    int timer = 0;

    printf("Please input how many seconds you want to convert\n");
    scanf("%d",&sekunder);

    hours_minutes_seconds(sekunder, &nysekunder, &minnuter, &timer);

    printf("The new times are\nSeconds=%d\nminnutes=%d\nHours=%d",nysekunder,minnuter,timer);

    return 0;
}