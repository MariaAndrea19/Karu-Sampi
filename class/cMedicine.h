#ifndef KARU_SAMPI_CLASS_CMEDICINE_H
#define KARU_SAMPI_CLASS_CMEDICINE_H

#include "..\types.h"
#include "cDisease.h"

class cMedicine{
    private:
        text_t name;
        dose_t dose;
    
    public:
        cMedicine(text_t n, dose_t d): name(n), dose(d) {}
        ~cMedicine();
    
        void initializeMedicine();
};

// Idea: Create a class or a vector to indicate the days to follow the medication.

#endif
