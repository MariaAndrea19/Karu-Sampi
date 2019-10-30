#ifndef KARU-SAMPI_CPATIENT_H
#define KARU-SAMPI_CPATIENT_H

class cPatient {
        textT name;
        genderT gender;
        ageT age;
        massT mass;
        lengthT height;
        pressureT pressure;
        rateT heartRate;
    public:
        void setName(textT name);
        textT getName();
        void setAge(ageT age);
        ageT getAge();
        void setMass(massT mass);
        massT getMass();
        void setGender(genderT gender);
        genderT getGender();
        void setPressure(pressureT pressure);
        pressureT getPressure();
        void setHeartRate(rateT heartRate);
        rateT getHeartRate();
};

#endif
