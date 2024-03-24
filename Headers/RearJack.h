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
        RearJack(string name, int team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        RearJack(string name, short team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        void slideJack();
        void liftCar();
        string getRole();
        void setRole(string role);
};
