include "funciones.h"

    
Enfermedad Gripe(1, sintomas_gripe);
vector<Sintoma> sintomas_gripe = {dolor_garganta, dolor_cabeza, agotamiento_extremo, fiebre, fatiga, dolor_muscular, rapidez, tos, congestion};
vector<Sintomas> sintomas_resfrio = {dolor_garganta, dolor_cabeza, estornudos, estornudos_ratio, congestion, espesor_mucosidad};
vector<Sintomas> sintomas_alergia = {};
    
    
Enfermedad::Enfermedad(int type_enf, vector<Sintoma> symp_enf){
    tipo_enf = type_enf;
    sintomas_enf = symp_enf;    
}
