#ifndef KARU_SAMPI_CLASS_CSYMPTOMS_H 
#define KARU_SAMPI_CLASS_CSYMPTOMS_H 

#include "..\types.h"

class cSymptom{
        text_t name;
        state_t presence;
        days_t time; 
    public:
        cSymptom();
        cSymptom(text_t n, state_t p, days_t t);
 
        void setName(text_t n);
        void setPresence(state_t p);
        void setTime(days_t t);

        text_t getName();
        state_t getPresence();
        days_t getTime();
};

#endif
