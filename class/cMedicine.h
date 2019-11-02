#ifndef KARU-SAMPI-CLASS-CMEDICINE-H
#define KARU-SAMPI-CLASS-CMEDICINE-H

class cMedicine{
    private:
        text_t name;
      
    public:
        cMedicine();
        ~cMedicine();
        
        void setName(text_t n);
        
        text_t getName();
        
};

#endif
