//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_TEAMDRIVERA_H
#define PRACTICA1_TEAMDRIVERA_H

#include "PitCrewTeam.h"

class TeamDriverA : public PitCrewTeam{
    
    private:
        string driverName;
        PitCrewTeam pitTeam;
        string pilotTeam = "A";

    public:

    TeamDriverA(PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    TeamDriverA() = default;
    void setNombrePiloto (string nombrePiloto);
    string getNombrePiloto();
    void setPitCrewTeam (PitCrewTeam pitTeam);
    PitCrewTeam getPitCrewTeam();
    void setDriverName(string driverName);
    string getDriverName();
};

#endif //PRACTICA1_TEAMDRIVERA_H