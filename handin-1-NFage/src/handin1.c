#include <stdio.h>

int seconds; // bliver givet af brugeren via en scanf-promt.
int minutes = 60;
int hours = 60;
int days = 24;
int weeks = 7;

int main(void)
{
    printf("Please input any amount of seconds: \n");
    scanf("%d", &seconds);

    int total_minutes = seconds / minutes;
    int total_hours = total_minutes / hours;
    int total_days = total_hours / days;
    int total_weeks = total_days / weeks;

    printf("That equates to %d weeks, %d days, %d hours, %d minutes and %d seconds. :"
           ,total_weeks, total_days % weeks, total_hours % days, total_minutes % hours, seconds % minutes);

    return (0);
}