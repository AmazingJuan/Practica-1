//
// Created by Diego on 21/03/2024.
//

#include "../Headers/LollipopMan.h"
#include "iostream"
using namespace std;

LollipopMan::LollipopMan(string name, string uniqueTalent, string pitTeamName, class F1Team F1Team): PitCrewTeam(uniqueTalent, pitTeamName, F1Team){
    this->name = name;
};

void LollipopMan::findSafeSpace(){
    cout << "Buscando un espacio seguro para que el piloto arranque..." << endl;
    cout << "Espacio encontrado correctamente" << endl;
}
void LollipopMan::giveSignal(){
    cout << "El Coche puede arrancar Go Go Go..." << endl;
};