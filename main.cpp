#include <iostream>
#include "funciones.h"
#include <cmath>
using namespace std;


int main(){ 
    string nombre;
    int age, weight, height, pressure, rate;
    double IMC;
    cout<< "¡Hola! Mi nombre es Karu, tu asistente médico. ¿Podrías decirme tu nombre?";
    cin>>nombre;
    cout<< "Muy bonito nombre." << "¿Cuántos años tienes?";
    cin>> age;
    cout<< "¿Cuánto pesas y cuánto mides? ¡Sin mentir!";
    cin>>weight>> height;
    cout<< "Muy bien. Ahora, indique al asistente que ingrese su presión arterial, por favor";
    cin>>pressure;
    cout<<"Y última pregunta, nuevamente el asistente ingrese el pulso cardiaco. ¡Tranquilo! Ya casi terminamos.";
    cin>>rate;
    cout<<"¡Increíble! Muchas gracias por responder. Voy a procesar alguno de tus datos.";
    IMC= weight/pow(height, 2);
    if(IMC>24.99)
        cout<<"¡Uy! Antes de empezar, ¡ten cuidado con tu alimentación! Al parecer tienes más peso de lo que deberías. ¡Cuida tus comidas!";
    else if(IMC<18) cout<<"¡Uy! Antes de empezar, ¡ten cuidado con tu alimentación! Al parecer tienes menos peso de lo que deberías. ¡Cuida tus comidas!";
    else cout<<"¡Te encuentras en tu peso! Felicitaciones, "<< nombre<<".";
    
    
   
    inicializar_sintomas();
    
    //RED NEURONAL
    
    inicializar_enfermedades();

    //CONTEO DE PROBABILIDADES +
    cout<<"Ahora, ¿puedes contarme sobre tus síntomas," <<nombre<<"?";
    cout<<"Entonces, al parecer tienes"<< cDisease.getName() << "Pero no te preocupes, con los cuidados adecuados estarás mejor muy pronto."<<endl
        <<"Para mejorarte, necesitarás"<< cMedicine.getName()<<"y muuucho reposo, además de no hacer desarreglos, ¿bien?"<<endl<<
        "Estos medicamentos se encuentran en distintos precios, los cuales pueden ser"<< (precios)<<endl;
    cout<< "Si con esto no presentas mejora, ¡no te asustes!, solo dale una visita a este especialista"<< (doctor) <<endl<<
        "Ellos sabrán cómo ayudarte, ¡Tú tranquilo!";
    cout<< "Eso sería todo, " << nombre <<". Muchas gracias por confiar en mí, estoy preparado para ayudarte. Muchísima suerte y que te mejores muy pronto. ¡Adiós!";
    
 
  return 0;
}
