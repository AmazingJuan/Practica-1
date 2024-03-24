//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreGunner.h"
#include "iostream"
using namespace std;

TyreGunner::TyreGunner(string name, string numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team ): PitCrewTeam(uniqueTalent, pitTeamName, F1Team){
    this -> name = name;
    this -> numWheel = numWheel;
}


//SETTERS Y GETTER
string TyreGunner::loosenNut(){
    return " loosens the nut of the wheel " + this -> getNumWheel();
}
string TyreGunner::removeNut(){
    return " removes the nut of the wheel " + this -> getNumWheel();
}
string TyreGunner::fitNut(){
    return " fits the nut of the wheel " + this -> getNumWheel();
}
void TyreGunner::setNumWheel(string numWheel){
    TyreGunner::numWheel = numWheel;
}
string TyreGunner::getName(){
    return name;
}
string TyreGunner::getNumWheel() const{
    return numWheel;
}
