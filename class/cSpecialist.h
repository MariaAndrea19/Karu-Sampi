#ifndef KARU-SAMPI-CLASS-CSPECIALIST-H
#define KARU-SAMPI-CLASS-CSPECIALIST-H

#include "..\types.h"
#include "cDisease.h
#include "cSymptoms.h"

class cSpecialist{
    private:
        text_t name;
        text_t disease;
        intensity_t intensity;

    public:
        cSpecialist();
        ~cSpecialist();

        void setName(text_t n);

        text_t getName();
        text_t getDisease();
        intensity_t getIntensity();
        
};

#endif  
