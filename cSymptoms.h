#ifndef KARU_SAMPI_CSYMPTOMS_H
#define KARU_SAMPI_CSYMPTOMS_H

#include "variables.h"

class cSymptom{
    private:
        stateT symptomState;
        timeT symptomLength;
        degreeT symptomIntensity;
    public:
        cSymptom(stateT symptomState, timeT symptomLength, degreeT symptomIntensity);
        void setSymptomState();
        stateT getSymptomState();
        void setSymptomLenght();
        timeT getSymptomLength();
        void setSymptomIntensity();
        degreeT getSymptomIntensity();
};



#endif
