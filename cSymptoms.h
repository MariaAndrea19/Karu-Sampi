#ifndef KARU_SAMPI_CSYMPTOMS_H
#define KARU_SAMPI_CSYMPTOMS_H

//typedef bool=state

 class cSymptom{
    private:
        state symptomState;
    public:
        cSymptom(state symptomState);
        void setSymptomState();
        state getSymptomState();
};



#endif
