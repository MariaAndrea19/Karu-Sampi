#include "cSpecialist.h"

cSpecialist::cSpecialist(): name(""), disease(""), intensity(0) {}

void cSpecialist::setName(text_t n) {name = n;}

text_t cSpecialist::getName(){return name;}
text_t cSpecialist::getDisease(){return disease;}
intensity_t cSpecialist::getIntensity(){return intensity;}
