//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreOn.h"
#include "iostream"
using namespace std;

TyreOn::TyreOn(string name, int numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team ): PitCrewTeam(uniqueTalent, pitTeamName, F1Team){
    this -> name = name;
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
int TyreOn::getNumWheel() const{
    return numWheel;
}