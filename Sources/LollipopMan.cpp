//
// Created by Diego on 21/03/2024.
//

#include "../Headers/LollipopMan.h"
#include "iostream"
using namespace std;

LollipopMan::LollipopMan(string name, string uniqueTalent, string pitTeamName, class F1Team F1Team): PitCrewTeam(uniqueTalent, pitTeamName, F1Team){
    this->name = name;
};

string LollipopMan::findSafeSpace(){
    return " looks for a safe space for the pilot to start";
}
string LollipopMan::giveSignal(){
    return " gives the signal that the car can start";
}

string LollipopMan::getName(){
    return name;
}

void LollipopMan::setName(string name){
    LollipopMan::name = name;
}