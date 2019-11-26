#ifndef KARU_SAMPI_CLASS_CSYMPTOM_H 
#define KARU_SAMPI_CLASS_CSYMPTOM_H 

#include "..\types.h"

class cSymptom{
            text_t name;
            state_t presence;
            intensity_t intensity;
            days_t time; 
                    
        public:
            cSymptom(text_t n, state_t p): name(n), presence(p) {}
     
            void setName(text_t n){name = n;}
            void setPresence(state_t p){presence = p;}
            void setIntensity(intensity_t i){intensity = i}
            void setTime(days_t t){time = t;}
           
            text_t getName();
            state_t getPresence();
            intensity_t getIntensity();
            days_t getTime();
};

#endif
