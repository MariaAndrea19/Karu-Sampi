#ifndef KARU_SAMPI_CLASS_CDISEASE_H
#define KARU_SAMPI_CLASS_CDISEASE_H

#include "..\types.h"
#include "cPatient.h"
#include "cMedicine.h"
#include "cDoctor.h"

class cReport {
        cPatient patient;
        cMedicine* medicine;
        cDoctor* doctor;
    public:
        cReport(): medicine(nullptr), doctor(nullptr){}

        void setMedicine();
        void setdoctor();
};

#endif 
