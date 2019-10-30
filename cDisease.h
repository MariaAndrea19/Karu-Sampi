#ifndef KARU_SAMPI_CDISEASE_H
#define KARU_SAMPI_CDISEASE_H

class cDisease{
    private:
        vector<cSymptom> diseaseSymptom;
    public:
        cDisease(vector<cSymptom> diseaseSymptom);
        vector<cSymptom> getDiseaseSymptom(); 

};

#endif
