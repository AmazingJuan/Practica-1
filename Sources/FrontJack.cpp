//
// Created by Diego on 21/03/2024.
//

#include "../Headers/FrontJack.h"
#include "iostream"
using namespace std;
FrontJack::FrontJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

FrontJack::FrontJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

void FrontJack::slideJack(){
    cout << "Deslizando el gato debajo de la parte delantera del coche..." << endl;
    cout << "EL Gato ha sido deslizado correctamente." << endl;
}
void FrontJack::liftCar(){
    cout << "Levantando la parte delantera del coche..." << endl;
    cout << "El Coche ha sido levantado exitosamente." << endl;
}
