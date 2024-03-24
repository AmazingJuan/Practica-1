//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreOff.h"
#include "iostream"
using namespace std;

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
int TyreOff::getNumWheel() const{
    return numWheel;
}