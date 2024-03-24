//
// Created by juanp on 21/3/2024.
//

#include "string"
#include "TeamDriverA.h"
#include "TeamDriverB.h"

using namespace std;

class FrontJack : TeamDriverA,  TeamDriverB{
private:
    string name;


public:
    FrontJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    FrontJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);

    void slideJack();
    void liftCar();
    void setRole();
    string getRole();

};
