//
// Created by Diego on 21/03/2024.
//

#include "../Headers/TeamDriverA.h"

TeamDriverA::TeamDriverA(string nombrePiloto, PitCrewTeam pitTeam, int miembros){
    this -> nombrePiloto = nombrePiloto;
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
    TeamDriverA::PitTeam = pitTeam;
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