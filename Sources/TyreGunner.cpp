//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreGunner.h"
#include "iostream"
using namespace std;

TyreGunner::TyreGunner(int numWheel){
    this -> numWheel = numWheel;
}

void TyreGunner::loosenNut(){
    cout << "Aflojando tuerca..." << endl;
}
void TyreGunner::removeNut(){
    cout << "Removiendo la tuerca..." << endl;
    cout << "La Tuerca ha sdo removida exitosamente." << endl;
}
void TyreGunner::fitNut(){
    cout << "Ajustando tuerca..." << endl;
    cout << "La Tuerca ha sido ajustada correctamente." << endl;
}
void TyreGunner::setNumWheel(int numWheel){
    TyreGunner::numWheel = numWheel;
}
int TyreGunner::getNumWheel() const{
    return numWheel;
}