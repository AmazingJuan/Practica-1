//
// Created by Diego on 21/03/2024.
//

#include "../Headers/SideJack.h"
#include "iostream"
using namespace std;

SideJack::SideJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

SideJack::SideJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

void SideJack::stabilizeCar(){
    cout << "Estabilizando el coche para mantenerlo lo más quieto posible..." << endl;
}
void SideJack::liftCar(){
    cout << "Levantando el coche..." << endl;
    cout << "El coche ha sido levantado correctamente." << endl;
}