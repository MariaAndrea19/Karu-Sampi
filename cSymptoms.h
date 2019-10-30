#ifndef KARU_SAMPI_CSYMPTOMS_H
#define KARU_SAMPI_CSYMPTOMS_H

 class cSymptom{
    private:
        bool symptomState;
    public:
        cSymptom(bool symptomState);
        void setSymptomState();
        bool getSymptomState();
};



#endif
