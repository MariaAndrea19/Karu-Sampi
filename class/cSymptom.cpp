#include "cSymptom.h"

cSymptom::cSymptom(): name(""), presence(false), time(0) {}

cSymptom::cSymptom(text_t n, state_t p, days_t t): name(n), presence(p), time(t) {}
    

void cSymptom::setName(text_t n) {name = n;}
void cSymptom::setPresence(state_t p) {presence = p;}
void cSymptom::setTime(days_t t) {time = t;}
void cSymptom::setIntensity(intensity_t i) {intensity = i}

text_t  cSymptom::getName(){return name;}
state_t cSymptom::getPresence(){return presence;}
days_t  cSymptom::getTime(){return time;}
intensity_t cSymptom::getIntensity(){return intensity;}

