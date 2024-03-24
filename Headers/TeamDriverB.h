//
// Created by juanp on 21/3/2024.
//
#ifndef PRACTICA1_TEAMDRIVERB_H
#define PRACTICA1_TEAMDRIVERB_H

#include "PitCrewTeam.h"

class TeamDriverB : public PitCrewTeam{

    private:
        string driverName;
        PitCrewTeam pitTeam;
        string pilotTeam = "B";

    public:
        TeamDriverB(PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        TeamDriverB() = default;
        void setNombrePiloto (string nombrePiloto);
        string getNombrePiloto();
        void setPitCrewTeam (PitCrewTeam pitTeam);
        PitCrewTeam getPitCrewTeam();
        void setDriverName (string driverName);
        string getDriverName ();
};

#endif //PRACTICA1_TEAMDRIVERB_H