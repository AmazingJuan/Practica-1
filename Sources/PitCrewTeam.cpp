//
// Created by Diego on 21/03/2024.
//

#include "../Headers/PitCrewTeam.h"

PitCrewTeam::PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team){
    this -> uniqueTalent = uniqueTalent;
    this -> pitTeamName = pitTeamName;
    this -> F1Team = F1Team;
    this -> pilotTeam = "General";
}

PitCrewTeam::PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team, string team){
    this -> uniqueTalent = uniqueTalent;
    this -> pitTeamName = pitTeamName;
    this -> F1Team = F1Team;
    this -> pilotTeam = team;
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

PitCrewTeam::PitCrewTeam() {
}
