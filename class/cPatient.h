#ifndef KARU_SAMPI_CLASS_CPATIENT_H
#define KARU_SAMPI_CLASS_CPATIENT_H

#include "..\types.h"
#include "cDisease.h"

using diseases_t = vector<cDisease>;

class cPatient {
    private:
        text_t name;
        age_t age;
        gender_t gender;
        kilogram_t mass;
        meter_t height;
        mmhg_t pressure;
        bpm_t heartRate;
        diseases_t diseases;
    public:
        cPatient(): name(""), age(0), gender(true), mass(0), height(0), pressure(0), heartRate(0) {}
        cPatient(text_t n, age_t a, gender_t g, kilogram_t m, meter_t h, mmhg_t p, bpm_t hR): name(n), age(a), gender(g), mass(m), height(h), pressure(p), heartRate(hR) {}

        void setName(text_t n){name = n;} 
        void setAge(age_t a){age = a;}
        void setGender(gender_t g){gender = g;}
        void setMass(kilogram_t m){mass = m;}
        void setHeight(meter_t h){height = h;}
        void setPressure(mmhg_t p){pressure = p;}
        void setHeartRate(bpm_t hR){heartRate = hR;}
        void addDisease(cDisease d){diseases.emplace_back(d);}

        text_t getName(){return name;}
        age_t getAge(){return age;}
        gender_t getGender(){return gender;}
        kilogram_t getMass(){return mass;}
        meter_t getHeight(){return height;}
        mmhg_t getPressure(){return pressure;}
        bpm_t getHeartRate(){return heartRate;}
        diseases_t getDisease(){return diseases;}

};

#endif
