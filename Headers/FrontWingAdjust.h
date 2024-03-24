//
// Created by juanp on 21/3/2024.
//


#include "TeamDriverA.h"
#include "TeamDriverB.h"

class FrontWingAdjust : public TeamDriverA, TeamDriverB {
private:
    string name;

public:
    FrontWingAdjust(string name, int team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    FrontWingAdjust(string name, short team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    void turnScrew();
    void adjustFlap();
};
