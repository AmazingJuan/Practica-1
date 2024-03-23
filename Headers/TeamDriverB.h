//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

#ifndef PRACTICA1_TEAMDRIVERB_H
#define PRACTICA1_TEAMDRIVERB_H

#endif //PRACTICA1_TEAMDRIVERB_H

class TeamDriverB : public PitCrewTeam{

    private:

        string nombrePiloto;
        PitCrewTeam pitTeam;
        int miembros;

    public:

    TeamDriverB(string nombrePiloto, PitCrewTeam pitTeam, int miembros);

    void setNombrePiloto (string nombrePiloto);
    string getNombrePiloto();
    void setPitCrewTeam (PitCrewTeam pitTeam);
    PitCrewTeam getPitCrewTeam();
    void setMiembros(int miembros);
    int getMiembros();


};