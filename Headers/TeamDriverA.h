//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

#ifndef PRACTICA1_TEAMDRIVERA_H
#define PRACTICA1_TEAMDRIVERA_H

#endif //PRACTICA1_TEAMDRIVERA_H

class TeamDriverA : public PitCrewTeam{
    
    private:
        string nombrePiloto;
        PitCrewTeam pitTeam;
        int miembros;

    public:

    TeamDriverA(string nombrePiloto, PitCrewTeam pitTeam, int miembros);
    
    void setNombrePiloto (string nombrePiloto);
    string getNombrePiloto();
    void setPitCrewTeam (PitCrewTeam pitTeam);
    PitCrewTeam getPitCrewTeam();
    void setMiembros(int miembros);
    int getMiembros();
};