#ifndef PRACTICA1_PITCREWTEAM_H
#define PRACTICA1_PITCREWTEAM_H

#endif //PRACTICA1_PITCREWTEAM_H

#include "string"
#include "F1Team.h"

using namespace std;
class PitCrewTeam{
    public:



    private:
        string uniqueTalent;
        string pitTeamName;
        F1Team f1Team;
        bool isSameTeam(F1Team team1, F1Team team2);
};