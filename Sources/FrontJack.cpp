//
// Created by Diego on 21/03/2024.
//

#include "../Headers/FrontJack.h"
#include "iostream"
using namespace std;
FrontJack::FrontJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

FrontJack::FrontJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

string FrontJack::slideJack(){
    return " slides the jack under the front of the car";
}
string FrontJack::liftCar(){
    return " lifts the front of the car";
}

//SETTERS Y GETTERS

string FrontJack::getName(){
    return name;
}

void FrontJack::setName(string name){
    this->name = name;
};