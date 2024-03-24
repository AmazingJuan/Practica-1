//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreOff.h"
#include "iostream"
using namespace std;

TyreOff::TyreOff(string name, string numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team ): PitCrewTeam(uniqueTalent, pitTeamName, F1Team){
    this -> name = name;
    this -> numWheel = numWheel;
}



string TyreOff::removeTyre(){
    return " removes the tyre of the wheel " + this -> getNumWheel();
}
void TyreOff::setNumWheel(string numWheel){
    TyreOff::numWheel = numWheel;
}

//SETTERS Y GETTERS

string TyreOff::getName(){
    return name;
}

void TyreOff::setName(string name){
    TyreOff::name = name;
}

string TyreOff::getNumWheel() const{
    return numWheel;
}