//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreOff.h"
#include "iostream"
using namespace std;

TyreOff::TyreOff(string name, int numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team ): PitCrewTeam(uniqueTalent, pitTeamName, F1Team){
    this -> name = name;
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