#ifndef KARU_SAMPI_CSYMPTOMS_H
#define KARU_SAMPI_CSYMPTOMS_H

#include "variables.h"

class cSymptom{
    private:
        stateT symptomState;
    public:
        cSymptom(stateT symptomState);
        void setSymptomState();
        stateT getSymptomState();
};



#endif
