#ifndef KARU_SAMPI_CLASS_CMEDICINE_H
#define KARU_SAMPI_CLASS_CMEDICINE_H

#include "..\types.h"
#include "cDisease.h"
#include "cSymptoms.h"
#include <vector>

class cMedicine{
    private:
        text_t name;
        vector<age_t> ageRange;
        text_t disease;
    
    public:
        cMedicine(text_t n, vector<age_t> aR, text_t d);
        ~cMedicine();

        void setName(text_t name);
        void setAge(vector<age_t> ageRange);
        void setDisease (text_t disease);
    
        void initializeMedicine();

};

#endif
