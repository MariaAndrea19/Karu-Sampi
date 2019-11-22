#include <iostream>
#include "CSymptom.h"
#include "CDisease.h"
#include "CPatient.h"
#include "types.h"
#include "cMedicine.h"
#include "cReport.h"


int main(){ 
    //Initializing objects
    CSymptom.initializeSymptoms();
    CMedicine.initializeMedicines();    
    CDisease.initializeDisease();
    
    //Patient data
    CPatient Patient;
    cout<<"¿Cómo se llama?"<<endl;
    cin>>name;
    cout<<"¿Cuántos años tiene?"<<endl;
    cin>>age;
    cout<<"¿Cuál es su género? (escriba M/F)"<<endl;
    cin>>gender;
    cout<<"¿Cuánto pesa?"<<endl;
    cin>>mass;
    cout<<"¿Cuánto mide?"<<endl;
    cin>>height;
    cout<<"Ingrese su presión"<<endl;
    cin>>pressure;
    cout<<"Ingrese su ritmo cardiaco"<<endl;
    cin>>heartRate;
  
    Patient(n,a,g,m,h,p,hR);
 
    
    
    
  return 0;
}
