//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TeamDriverB.h"

TeamDriverB::TeamDriverB(PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team): PitCrewTeam(uniqueTalent,pitTeamName,F1Team, pilotTeam){
    this -> pitTeam = pitTeam;
    this -> miembros = miembros;
}

void TeamDriverB::setNombrePiloto (string nombrePiloto){
    TeamDriverB::nombrePiloto = nombrePiloto;
}
string TeamDriverB::getNombrePiloto(){
    return nombrePiloto;
}
void TeamDriverB::setPitCrewTeam (PitCrewTeam pitTeam){
    TeamDriverB::pitTeam = pitTeam;
}
PitCrewTeam TeamDriverB::getPitCrewTeam(){
    return pitTeam;
}
void TeamDriverB::setMiembros(int miembros){
    TeamDriverB::miembros = miembros;
}
int TeamDriverB::getMiembros(){
    return miembros;
}