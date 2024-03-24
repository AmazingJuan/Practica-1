//
// Created by Diego on 21/03/2024.
//

#include "../Headers/FrontJack.h"
#include "iostream"
using namespace std;
FrontJack::FrontJack(string name, int team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, miembros, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

FrontJack::FrontJack(string name, short team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, miembros, uniqueTalent, pitTeamName, F1Team){
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
