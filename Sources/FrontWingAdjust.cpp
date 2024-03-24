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

void FrontWingAdjust::turnScrew(){
    cout << "Girando Tornillo..." << endl;
}
void FrontWingAdjust::adjustFlap(){
    cout << "Ajustando Flap..." << endl;
    cout  << "Cambios Aerodinámicos realizados al alerón correctamente." << endl;
}