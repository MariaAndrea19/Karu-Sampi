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
        Enfermedad(int tipo_enfermedad, vector<Sintoma> sintomas_enf);
        //metodos de acceso
        vector<Sintoma> getEnfermedad(); 
 };
 

 class Sintoma{
    private:
        bool estado_sintoma;
    public:
        //constructor
        Sintoma(bool estado_sintoma);
        //metodos de acceso
        void setEstado_sintoma();
        bool getEstado_sintoma();
};


class Persona{
    private:
        string nombre;
        int edad;
        int masa;
        char genero;
    public:
        void setNombre(string nombre);
        string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setMasa(int masa);
        int getMasa();
        void setGenero(char genero);
        char getGenero();
};


void inicializar_enfermedades();
void inicializar_sintomas();


#endif 
