//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreOff.h"

TyreOff::TyreOff(int numWheel){
    this -> numWheel = numWheel;
}

void TyreOff::removeTyre(){
    cout << "Removiendo neumático..." << endl;
    cout << "El Neumático ha sido removido exitosamente." << endl;
}
void TyreOff::setNumWheel(int numWheel){
    TyreOff::numWheel = numWheel;
}
int TyreOff::getNumWheel(){
    return numWheel;
}