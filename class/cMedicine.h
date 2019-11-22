#ifndef KARU_SAMPI_CLASS_CMEDICINE_H
#define KARU_SAMPI_CLASS_CMEDICINE_H

#include "..\types.h"
#include "cDisease.h"
#include "cSymptoms.h"

class cMedicine{
    private:
        text_t name;
        time_t time;
        text_t disease;
    
    public:
        cMedicine();
        ~cMedicine();

        void setName(text_t n);
    
        text_t getName();
        time_t getTime();
        text_t getDisease();
    
        void initializeMedicine();

};

#endif
