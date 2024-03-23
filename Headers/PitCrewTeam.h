#ifndef PRACTICA1_PITCREWTEAM_H
#define PRACTICA1_PITCREWTEAM_H

#endif //PRACTICA1_PITCREWTEAM_H

#include "string"
#include "F1Team.h"

using namespace std;
class PitCrewTeam{
    private:
        string uniqueTalent;
        string pitTeamName;
        F1Team F1Team;
        bool isSameTeam(F1Team team1, F1Team team2);

public:

PitCrewTeam(string uniqueTalent, string pitTeamName, F1Team F1Team);

void setUniqueTalent(string uniqueTalent);
string getUniqueTalent();
void setPitName(string pitTeamName);
string getPitName();
void setF1Team(F1Team F1Team);
F1Team getF1Team();

};