#ifndef KARU_SAMPI_CLASS_CDISEASE_H
#define KARU_SAMPI_CLASS_CDISEASE_H

#include "..\types.h"
#include "cSymptom.h"

using symptoms_t = vector<cSymptom>;

class cDisease{
        text_t name;
        symptoms_t symptoms;
    public:
        cDisease(): name("Unknow") {}

        void detectDisease();
        void addSymptom(cSymptom s){symptoms.emplace_back(s);}
        
        text_t getName(){return name;}
        symptoms_t getSymptoms(){return symptoms;}
};

#endif
