//
// Created by Diego on 21/03/2024.
//

#include "../Headers/PitCrewTeam.h"

PitCrewTeam::PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team){
    this -> uniqueTalent = uniqueTalent;
    this -> pitTeamName = pitTeamName;
    this -> F1Team = F1Team;
}

PitCrewTeam::PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team, string driverA, string driverB){
    this -> uniqueTalent = uniqueTalent;
    this -> pitTeamName = pitTeamName;
    this -> F1Team = F1Team;
    this -> driverA = driverA;
    this -> driverB = driverB;
}

PitCrewTeam::PitCrewTeam()= default;

string PitCrewTeam::buildPresentation() {
    string presentation = "The Pit Team prepared to handle the vehicle stop in today's race is " + pitTeamName + "known primarily for their unique talent: "  + uniqueTalent +  "and the ability to perform at their best.\nWe will be accompanied by the pilots " + driverA + " Y "+ driverB + " who will give their best to win the race.";
    return presentation;
}

void PitCrewTeam::presentation(){
    string presentation = buildPresentation();
    cout << presentation;
}

void PitCrewTeam::setUniqueTalent(string uniqueTalent){
    PitCrewTeam::uniqueTalent = uniqueTalent;
}
string PitCrewTeam::getUniqueTalent(){
    return uniqueTalent;
}
void PitCrewTeam::setPitName(string pitTeamName){
    PitCrewTeam::pitTeamName = pitTeamName;
}
string PitCrewTeam::getPitName(){
    return pitTeamName;
}
void PitCrewTeam::setF1Team(class F1Team F1Team){
    PitCrewTeam::F1Team = F1Team;
}
F1Team PitCrewTeam::getF1Team(){
    return F1Team;
}

void PitCrewTeam::setDriverA(string driverA){
    PitCrewTeam::driverA = driverA;
}
string PitCrewTeam::getDriverA(){
    return driverA;
}

void PitCrewTeam::setDriverB(string driverA){
    PitCrewTeam::driverA = driverA;
}
string PitCrewTeam::getDriverB(){
    return driverA;
}




