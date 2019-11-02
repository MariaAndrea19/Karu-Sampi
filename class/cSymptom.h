#ifndef KARU_SAMPI_CLASS_CSYMPTOM_H 
#define KARU_SAMPI_CLASS_CSYMPTOM_H 

#include "..\types.h"

class cSymptom{
        text_t name;
        state_t presence;
        days_t time; 
        intensity_t intensity;
        
    public:
        cSymptom();
        cSymptom(text_t n, state_t p, days_t t);
 
        void setName(text_t n);
        void setPresence(state_t p);
        void setTime(days_t t);
        void setIntensity(intensity_t i);

        text_t getName();
        state_t getPresence();
        days_t getTime();
        intensity_t getIntensity();
};

#endif
