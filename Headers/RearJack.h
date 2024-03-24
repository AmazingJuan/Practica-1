//
// Created by juanp on 21/3/2024.
//

#include "string"
#include "TeamDriverA.h"
#include "TeamDriverB.h"

using namespace std;
class RearJack : public TeamDriverA, TeamDriverB {
    private:
        string name;
    public:
        RearJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        RearJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        void slideJack();
        void liftCar();
        string getRole();
        void setRole(string role);
};

