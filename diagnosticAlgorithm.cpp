#include "types.h"
#include "class\cPatient.h"

state_t anwser(){
    string ans;
    do {
    cout << "\nRespuesta: " 
    cin >> ans;
    for (auto &c: ans) c = tolower(c);
    if ( ans == "si"  || ans == '1')
        return 1;
    else if (ans == "no" || ans == "0")
        return 0;
    else { cout << "\nNo es una respuesta valida" }
    } while (true);
}

void headche(cPatient &cP){
    cout << "\nTienes dolor de cabeza?\n"
    state_t presence = answer();
    if (presence){
        cSymptom objHeadche("Sore Throat", presence);
        cP.addSymtomps(objSoreThroat);
        dolorDeCabeza(p);
    } else Congestion();
}


void soreThroat(cPatient &cP){
    cout << "\nTienes dolor de garganta?\n";
    state_t presence = answer();
    if (presence){
        cSymptom objSoreThroat("Sore Throat", presence);
        cP.addSymtomps(objSoreThroat);
        dolorDeCabeza(p);
    } else Congestion();
}

void diagnostic(cPatient &cP){soreThroat(cP);}

