#ifndef KARU_SAMPI_CLASS_CDOCTOR_H
#define KARU_SAMPI_CLASS_CDOCTOR_H

#include "..\types.h"

class cDoctor {
        text_t name;
    public:
        cDoctor(text_t d): name(d){}

        text_t getName(){return name;}

};

#endif
