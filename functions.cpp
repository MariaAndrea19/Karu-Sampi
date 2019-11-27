#include "types.h"
double IMC;

void introduction(text_t& name, age_t& age, gender_t& gender, kilogram_t& weight, meter_t& height, mmhg_t& pressure, bpm_t& rate){
    cout<< "¡Hola! Mi nombre es Karu, tu asistente médico. ¿Podrías decirme tu nombre?";
    cin>> name;
    cout<< "Muy bonito nombre." << "¿Cuántos años tienes?";
    cin>> age;
    cout<< "¿Cuánto pesas y cuánto mides? ¡Sin mentir!";
    cin >> weight >> height;
    cout << "Muy bien. Ahora, indique al asistente que ingrese su presión arterial, por favor";
    cin >> pressure;
    cout << "Y última pregunta, nuevamente el asistente ingrese el pulso cardiaco. ¡Tranquilo! Ya casi terminamos.";
    cin >> rate;
    cout << "¡Increíble! Muchas gracias por responder. Voy a procesar alguno de tus datos.";
}


void abnormal (kilogram_t weight, meter_t height, mmgh_t pressure, bpm_t rate){ 
    imc_t imc;
    imc = weight/pow(height, 2);
    
    if(imc>24.99)
        cout << "¡Uy! Antes de empezar, ¡ten cuidado con tu alimentación! Al parecer tienes más peso de lo que deberías. ¡Cuida tus comidas!";
    else if(imc<18) cout<<"¡Uy! Antes de empezar, ¡ten cuidado con tu alimentación! Al parecer tienes menos peso de lo que deberías. ¡Cuida tus comidas!";
    
    else cout<<"¡Te encuentras en tu peso! Felicitaciones, "<< name <<".";
   
    if(pressure_s>120 || pressure_d>80) cout<< "Oye, ¡ten mucho cuidado! Al parecer tu presión arterial supera los valores normales. Sería peligroso que desarrolles hipertensión. ¡Cuida tu dieta!";
    else cout<<"¡Perfecta presión! Te encuentras en tus valores normales, ¡eres genial!";
    
    if(age<5){
        if(rate>75 && rate<115){ cout<< "El pequeño tiene un corazón sano. ¡Muy bien!";
    }else{ cout<< "Necesita dar un chequeo a esos latidos, ¡mantenga sano su corazón!";
    }else if(age>4 || age<10){
            if(rate>70 || rate<110){cout<<"El pequeño tiene un corazón sano. ¡Muy bien!";
                                   }else{cout<<"Necesita dar un chequeo a esos latidos, ¡mantenga sano su corazón!";}
            else{if(rate>60 || rate<100) cout<<"Tiene un corazón muy sano, ¡increíble!"; else cout<< "Necesita dar un chequeo a esos latidos, ¡mantenga sano su corazón!";
                }
    cout<< "¡Gracias por ser sincero!";
        }
        
        
void disease(){
    
    //CONTEO DE PROBABILIDADES +
    cout<<"Ahora, ¿puedes contarme sobre tus síntomas," <<nombre<<"?";
    inicializar_sintomas();
    
    //RED NEURONAL
    
    inicializar_enfermedades();
    cout<<"Entonces, al parecer tienes"<< cDisease.getName() << "Pero no te preocupes, con los cuidados adecuados estarás mejor muy pronto."<<endl
        <<"Para mejorarte, necesitarás"<< cMedicine.getName()<<"y muuucho reposo, además de no hacer desarreglos, ¿bien?"<<endl<<
        "Estos medicamentos se encuentran en distintos precios, los cuales pueden ser"<< (precios)<<endl;
    cout<< "Si con esto no presentas mejora, ¡no te asustes!, solo dale una visita a este especialista"<< (doctor) <<endl<<
        "Ellos sabrán cómo ayudarte, ¡Tú tranquilo!";
    cout<< "Eso sería todo, " << nombre <<". Muchas gracias por confiar en mí, estoy preparado para ayudarte. Muchísima suerte y que te mejores muy pronto. ¡Adiós!";
} 

