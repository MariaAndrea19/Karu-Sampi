#ifndef KARU_SAMPI_CLASS_CDISEASE_H
#define KARU_SAMPI_CLASS_CDISEASE_H

#include "..\types.h"

class cReport {
        cPatient patient;
        cMedicine* medicine;
        cDoctor* doctor;
    public:
        cReport();

        void setMedicine();
        void setdoctor();
};

#endif 
