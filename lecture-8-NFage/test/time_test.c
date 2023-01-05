#include <stdio.h>
#include <assert.h>
#include "../src/time_calc.h"

int main(void)
{
    assert(hours_minutes_seconds(4000, (int *) 1, (int *) 6, (int *) 40));
    return 0;
}