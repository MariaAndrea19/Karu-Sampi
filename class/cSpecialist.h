#ifndef KARU-SAMPI-CLASS-CSPECIALIST-H
#define KARU-SAMPI-CLASS-CSPECIALIST-H

#include "..\types.h"
#include "cDisease.h"

class cSpecialist{
    private:
        text_t name;

    public:
        cSpecialist();
        ~cSpecialist();

        void setName(text_t n);

        text_t getName();
};

#endif  
