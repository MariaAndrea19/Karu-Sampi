#ifndef KARU-SAMPI-CLASS-CSPECIALIST-H
#define KARU-SAMPI-CLASS-CSPECIALIST-H


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
