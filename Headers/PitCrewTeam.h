#ifndef PRACTICA1_PITCREWTEAM_H
#define PRACTICA1_PITCREWTEAM_H

#include "string"
#include "F1Team.h"

using namespace std;
class PitCrewTeam{
    private:
        string uniqueTalent;
        string pitTeamName;
        string pilotTeam;
        F1Team F1Team;
        bool isSameTeam(class F1Team team1, class F1Team team2);

    public:
        PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team);
        PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team, string pilot);
        PitCrewTeam();
        void setUniqueTalent(string uniqueTalent);
        string getUniqueTalent();
        void setPitName(string pitTeamName);
        string getPitName();
        void setF1Team(class F1Team F1Team);
        class F1Team getF1Team();

};
#endif //PRACTICA1_PITCREWTEAM_H