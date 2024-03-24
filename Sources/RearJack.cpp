//
// Created by Diego on 21/03/2024.
//

#include "../Headers/RearJack.h"
#include "iostream"
using namespace std;
RearJack::RearJack(string name, int team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverA(pitTeam, miembros, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

RearJack::RearJack(string name, short team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team) : TeamDriverB(pitTeam, miembros, uniqueTalent, pitTeamName, F1Team){
    this->name = name;
}

void RearJack::slideJack(){
    cout << "Deslizando el gato debajo de la parte trasera del coche..." << endl;
    cout << "EL Gato ha sido deslizado correctamente." << endl;
}
void RearJack::liftCar(){
    cout << "Levantando la parte trasera del coche..." << endl;
    cout << "El coche ha sido levantado exitosamente." << endl;
}