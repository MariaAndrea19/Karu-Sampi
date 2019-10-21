#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
using namespace std;

class Enfermedad{
  private:
    int tipo_enfermedad;
    vector<Sintoma> sintomas_enf;
  public:
    //constructor
    Enfermedad();
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
  
  public:
  
};


class Red{
  private:
  
  public:
  
};

#endif 
