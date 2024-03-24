//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TeamDriverB.h"

TeamDriverB::TeamDriverB(PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team): PitCrewTeam(uniqueTalent,pitTeamName,F1Team){
    this -> pitTeam = pitTeam;
    this -> driverName = pitTeam.getDriverB();
}



void TeamDriverB::setDriverName (string driverName){
    TeamDriverB::driverName = driverName;
}
string TeamDriverB::getDriverName(){
    return driverName;
}
void TeamDriverB::setPitCrewTeam (PitCrewTeam pitTeam){
    TeamDriverB::pitTeam = pitTeam;
}
PitCrewTeam TeamDriverB::getPitCrewTeam(){
    return pitTeam;
}