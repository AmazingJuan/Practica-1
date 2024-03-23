//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreOn.h"

TyreOn::TyreOn(int numWheel){
    this -> numWheel = numWheel;
}
void TyreOn::bringTyre(){
    cout << "Trayendo la llanta..." << endl;
}

void TyreOn::fitTyre(){
    cout << "Montando la llanta al coche..." << endl;
    cout << "La llanta ha sido montada al coche correctamente." << endl;
}
void TyreOn::setNumWheel(int numWheel){
    TyreOn::numWheel = numWheel;
}
int TyreOn::getNumWheel(){
    return numWheel;
}