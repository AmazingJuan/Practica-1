//
// Created by juanp on 21/3/2024.
//


#include "TeamDriverA.h"
#include "TeamDriverB.h"

class FrontWingAdjust : public TeamDriverA, TeamDriverB {
private:
    string name;

public:
    FrontWingAdjust(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    FrontWingAdjust(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    void turnScrew();
    void adjustFlap();
};
