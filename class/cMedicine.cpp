#include "cMedicine.h"

cMedicine::cMedicine(): name(""), time(0), disease("") {}

void cMedicine::setName(text_n n) {name = n;}

text_t cMedicine::getName(){return name;}
time_t cMedicine::getTime(){return time;}
text_t cMedicine::getDisease(){return disease;}

