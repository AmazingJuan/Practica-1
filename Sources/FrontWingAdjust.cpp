//
// Created by Diego on 21/03/2024.
//

#include "../Headers/FrontWingAdjust.h"
#include "iostream"
using namespace std;

FrontWingAdjust::FrontWingAdjust(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

FrontWingAdjust::FrontWingAdjust(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

string FrontWingAdjust::getName(){
    return name;
}

void FrontWingAdjust::setName(string name){
    FrontWingAdjust::name = name;
}

string FrontWingAdjust::turnScrew(){
    return " turns the screw ";
}
string FrontWingAdjust::adjustFlap(){
    return " adjusts the Front Flap";
}