#include "cDisease.h"

cDisease::cDisease(): name("") {}
cDisease::cDisease(text_t n, symptomsState s): name(n), symptoms(s) {}

void cDisease::setName(text_t n){name = n;}
void cDisease::setSymptoms(symptomsState s){symptoms = s;}

text_t          cDisease::getName(){return name;}
symptomsState   cDisease::getSymptoms(){return symptoms;}
