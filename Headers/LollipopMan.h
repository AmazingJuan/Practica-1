//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"


class LollipopMan : public PitCrewTeam {
private:
    string name;
public:
    LollipopMan(string name, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    void findSafeSpace();
    void giveSignal();
};