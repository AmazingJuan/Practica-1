//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TeamDriverA.h"
TeamDriverA::TeamDriverA(PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team): PitCrewTeam(uniqueTalent,pitTeamName,F1Team){
    this -> pitTeam = pitTeam;
    this -> driverName = pitTeam.getDriverA();
}

void TeamDriverA::setDriverName (string driverName){
    TeamDriverA::driverName = driverName;
}

string TeamDriverA::getDriverName() {
    return driverName;
}

void TeamDriverA::setPitCrewTeam (PitCrewTeam pitTeam){
    TeamDriverA::pitTeam = pitTeam;
}
PitCrewTeam TeamDriverA::getPitCrewTeam(){
    return pitTeam;
}
