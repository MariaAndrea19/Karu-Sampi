#include "cPatient.h"

cPatient::cPatient(): name(""), gender(true), mass(0), height(0), pressure(0), heartRate(0) {}

cPatient::cPatient(text_t n, gender_t g, kilogram_t m, meter_t h, mmhg_t p, bpm_t hR): name(n), gender(g), mass(m), height(h), pressure(p), heartRate(hR) {}


void cPatient::setName(text_t n)      {name = n      ;}
void cPatient::setGender(gender_t g)  {gender = g    ;}
void cPatient::setMass(kilogram_t m)  {mass = m      ;}
void cPatient::setHeight(meter_t h)   {height = h    ;}
void cPatient::setPressure(mmhg_t p)  {pressure = p  ;}
void cPatient::setHeartRate(bpm_t hR) {heartRate = hR;}

text_t     cPatient::getName() {return name;}
gender_t   cPatient::getGender() {return gender;}
kilogram_t cPatient::getMass() {return mass;}
meter_t    cPatient::getHeight() {return height;}
mmhg_t     cPatient::getPressure() {return pressure;}
bpm_t      cPatient::getHeartRate() {return heartRate;}

