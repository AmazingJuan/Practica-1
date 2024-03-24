//
// Created by juanp on 21/3/2024.
//
#include "PitCrewTeam.h"

class TeamDriverB : public PitCrewTeam{

    private:
        string nombrePiloto = "Sergio Rico";
        PitCrewTeam pitTeam;
        int miembros;
        string pilotTeam = "B";

    public:

    TeamDriverB(PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    TeamDriverB() = default;
    void setNombrePiloto (string nombrePiloto);
    string getNombrePiloto();
    void setPitCrewTeam (PitCrewTeam pitTeam);
    PitCrewTeam getPitCrewTeam();
    void setMiembros(int miembros);
    int getMiembros();


};