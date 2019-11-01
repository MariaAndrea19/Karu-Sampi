#ifndef KARU_SAMPI_CLASS_CPATIENT_H
#define KARU_SAMPI_CLASS_CPATIENT_H

#include "..\types.h"

class cPatient {
    private:
        text_t name;
        gender_t gender;
        kilogram_t mass;
        meter_t height;
        mmhg_t pressure;
        bpm_t heartRate;
    public:
        cPatient();
        cPatient(text_t n, gender_t g, kilogram_t m, meter_t h, mmhg_t p, bpm_t hR);

        void setName(text_t n);
        void setGender(gender_t g);
        void setMass(kilogram_t m);
        void setHeight(meter_t h);
        void setPressure(mmhg_t p);
        void setHeartRate(bpm_t hR);

        text_t getName();
        gender_t getGender();
        kilogram_t getMass();
        meter_t getHeight();
        mmhg_t getPressure();
        bpm_t getHeartRate();

};

#endif
