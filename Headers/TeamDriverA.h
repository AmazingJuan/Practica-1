//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

class TeamDriverA : public PitCrewTeam{
    
    private:
        string nombrePiloto = "Max Verstappen";
        PitCrewTeam pitTeam;
        int miembros;
        string pilotTeam = "A";

    public:

    TeamDriverA(PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    TeamDriverA() = default;
    void setNombrePiloto (string nombrePiloto);
    string getNombrePiloto();
    void setPitCrewTeam (PitCrewTeam pitTeam);
    PitCrewTeam getPitCrewTeam();
    void setMiembros(int miembros);
    int getMiembros();
};