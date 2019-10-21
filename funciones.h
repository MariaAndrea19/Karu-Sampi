#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include <string>
using namespace std;

class Enfermedad{
    private:
        int tipo_enfermedad;
        vector<Sintoma> sintomas_enf;
    public:
        //constructor
        Enfermedad(int type_enf, vector<Sintoma> symp_enf);
        //metodos de acceso
        bool setSintomas_enf();
        void getSintomas_enf(); 
 };
 
 
 class Sintoma{
    private:
        int tipo_sintoma;
        bool estado_sintoma;
    public:
        bool setEstado_sintoma();
        void getEstado_sintoma();
};


class Persona{
    private:
        string nombre;
        int edad;
        int masa;
        char genero;
    public:
    
};


class Red{
    private:
  
    public:
  
};

#endif 
