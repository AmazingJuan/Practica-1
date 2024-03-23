//
// Created by Diego on 21/03/2024.
//

#include "../Headers/PitCrewTeam.h"

PitCrewTeam::PitCrewTeam(string uniqueTalent, string pitTeamName, F1Team F1Team){
    this -> uniqueTalent = uniqueTalent;
    this -> pitTeamName = pitTeamName;
    this -> F1Team = F1Team;
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
void PitCrewTeam::setF1Team(F1Team F1Team){
    PitCrewTeam::F1Team = F1Team;
}
F1Team PitCrewTeam::getF1Team(){
    return F1Team;
}