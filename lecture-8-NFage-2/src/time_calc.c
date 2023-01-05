#include "time_calc.h"
#include <assert.h>



int main(void){
    hours_minutes_seconds(4000);
    assert(hours_minutes_seconds(4000,1,6,40));

  return 0;
}