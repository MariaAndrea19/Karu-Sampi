#include "cMedicine.h"

cMedicine::cMedicine(): name(""), time(0), disease("") {}

void cMedicine::setName(text_n n) {name = n;}

text_t cMedicine::getName(){return name;}
time_t cMedicine::getTime(){return time;}
text_t cMedicine::getDisease(){return disease;}


//Medicinas a emplear:
//Alergia
//Infante 0-5 años = cetirizina 5 mg jarabe. S/3.20, una cucharadita.
//Niño(6-14 años, con índice de masa corporal de 18.00-24.99): antihistamínico: leve: cetirizina
//(de 10 mg, tableta 10 comprimidos.), intenso: hisaler (laboratorio: bago, es más costoso S/1.26 solo un comprimido) 
//Adulto (15- adelante): dependiendo de la intensidad: leve: cetirizina, loratadina. intenso: hisaler, levocetirizina.

