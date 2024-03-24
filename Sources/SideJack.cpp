//
// Created by Diego on 21/03/2024.
//

#include "../Headers/SideJack.h"
#include "iostream"
using namespace std;

SideJack::SideJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

SideJack::SideJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

string SideJack::stabilizeCar(){
    return " stabilizes the car so that it is as still as possible.";
}
string SideJack::liftCar(){
    return " lifts the car on the side in case the front jack cannot";
}

string SideJack::getName(){
    return name;
}

void SideJack::setName(std::string name){
    SideJack::name = name;
}