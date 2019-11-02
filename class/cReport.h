#ifndef KARU-SAMPI-CLASS-CREPORT-H
#define KARU-SAMPI-CLASS-CREPORT-H

#include "..\types.h"
#include "cMedicine.h"
#include "cPatient.h"
#include "cDisease.h"
#include "cSpecialist.h"

class cReport{
    private:
        text_t report;
        cPatient patient;
        consultDoctor doctor;
        prescription_t medicine;
    
    public:
        cReport();
        ~cReport();
        
        void setReport();
        text_t getReport();

};

#endif
