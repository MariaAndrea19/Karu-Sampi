#ifndef KARU_SAMPI_CLASS_CDISEASE_H
#define KARU_SAMPI_CLASS_CDISEASE_H

#include <vector>
#include "..\types.h"
#include "cSymptom.h"

using symptomsState = vector<cSymptom>;

class cDisease{
        text_t name;
        symptomsState symptoms;
    public:
        cDisease();
        cDisease(text_t n, symptomsState s);

        void setName(text_t n);
        void setSymptoms(symptomsState s);
        
        text_t getName();
        symptomsState getSymptoms();
};

#endif
