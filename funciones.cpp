#include "funciones.h"

void inicializar_enfermedades(){
    //Establecieno listas de sintomas por enfermedad
    vector<Sintoma> sintomas_gripe = {dolor_garganta, dolor_cabeza, agotamiento_extremo, fiebre, fatiga, dolor_muscular, rapidez, tos, congestion};
    vector<Sintomas> sintomas_resfrio = {dolor_garganta, dolor_cabeza, estornudos, congestion, mucosidad_espesa};
    vector<Sintomas> sintomas_alergia = {congestion, estornudos, estornudos_constantes, irritacion_ocular};
    Enfermedad Gripe(1, sintomas_gripe);
    Enfermedad Resfrio(2, sintomas_resfrio);
    Enfermedad Alergia(3, sintomas_alergia);
}

void inicializar_sintomas(){
    //Estableciendo todos los sintomas a valor 0 por ahora
    Sintoma dolor_garganta(0);
    Sintoma dolor_cabeza(0);
    Sintoma agotamiento_extremo(0);
    Sintoma congestion(0);
    Sintoma tos(0);
    Sintoma espesor_mucosidad(0);
    Sintoma fiebre(0);
    Sintoma fatiga(0);
    Sintoma dolor_muscular(0);
    Sintoma estornudos(0);
    Sintoma rapidez(0);
    Sintoma estornudos_constantes(0);
    Sintoma irritacion_ocular(0);
}

Enfermedad::Enfermedad(int type_enf, vector<Sintoma> symp_enf){
    tipo_enf = type_enf;
    sintomas_enf = symp_enf;    
}

Sintoma::Sintoma(bool type_symp){
    estado_sintoma = type_symp;
}

