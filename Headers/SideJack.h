//
// Created by juanp on 21/3/2024.
//

#include "string"
#include "TeamDriverA.h"
#include "TeamDriverB.h"

using namespace std;

class SideJack : public TeamDriverA, TeamDriverB {

private:
    string name;
public:
    SideJack(string name, int team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    SideJack(string name, short team, string, PitCrewTeam pitTeam, int miembros, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    void stabilizeCar();
    void liftCar();
    void setSide(string side);
    string getSide();
};
