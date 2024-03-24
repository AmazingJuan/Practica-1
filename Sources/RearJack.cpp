//
// Created by Diego on 21/03/2024.
//

#include "../Headers/RearJack.h"
#include "iostream"
using namespace std;
RearJack::RearJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

RearJack::RearJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

string RearJack::slideJack(){
    return " slides the jack under the back of the car";
}
string RearJack::liftCar(){
    return " lifts the back of the car";
}

string RearJack::getName(){
    return name;
}

string RearJack::setName(string name){
    this->name = name;
}