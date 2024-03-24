//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TeamDriverA.h"
TeamDriverA::TeamDriverA(PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team): PitCrewTeam(uniqueTalent,pitTeamName,F1Team, pilotTeam){
    this -> pitTeam = pitTeam;
    this -> miembros = miembros;
}

void TeamDriverA::setNombrePiloto (string nombrePiloto){
    TeamDriverA::nombrePiloto = nombrePiloto;
}
string TeamDriverA::getNombrePiloto(){
    return nombrePiloto;
}
void TeamDriverA::setPitCrewTeam (PitCrewTeam pitTeam){
    TeamDriverA::pitTeam = pitTeam;
}
PitCrewTeam TeamDriverA::getPitCrewTeam(){
    return pitTeam;
}
void TeamDriverA::setMiembros(int miembros){
    TeamDriverA::miembros = miembros;
}
int TeamDriverA::getMiembros(){
    return miembros;
}