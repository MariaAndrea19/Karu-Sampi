#include "types.h"
#include "class\cReport.h"
#include "class\cPatient.cpp"

int main(){
    text_t name; age_t age; gender_t gender; kilogram_t weight; meter_t height; mmhg_t pressure; bpm_t rate;
    introduction(name, age, gender, weight, height, pressure, rate);
    
    cPatient p1(name, age, gender, weight, height, pressure, rate);

    
    return 0;
}
