//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TyreOn.h"
#include "iostream"
using namespace std;

TyreOn::TyreOn(string name, string numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team ): PitCrewTeam(uniqueTalent, pitTeamName, F1Team){
    this -> name = name;
    this -> numWheel = numWheel;
}


string TyreOn::bringTyre() const{
    return " brings the tyre " + this -> getNumWheel();
}

string TyreOn::fitTyre() const{
    return " fits the tyre " + this -> getNumWheel();
}
//SETTERS Y GETTERS
string TyreOn::getName(){
    return name;
}

void TyreOn::setName(string name){
    TyreOn::name = name;
}

void TyreOn::setNumWheel(string numWheel){
    TyreOn::numWheel = numWheel;
}
string TyreOn::getNumWheel() const{
    return numWheel;
}