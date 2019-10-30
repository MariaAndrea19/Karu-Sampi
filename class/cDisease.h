#ifndef KARU_SAMPI_CDISEASE_H
#define KARU_SAMPI_CDISEASE_H

#include "variables.h"
#include "cSymptoms.h"

class cDisease{
    private:
        vector<cSymptom> diseaseSymptom;
    public:
        cDisease(vector<cSymptom> diseaseSymptom);
        vector<cSymptom> getDiseaseSymptom(); 

};

#endif
