//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

class TyreOff : public PitCrewTeam {

private:
    string name;
    int numWheel;
public:
    TyreOff(string name, int numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team);

    void removeTyre();
    void setNumWheel(int numWheel);
    int getNumWheel() const;
};
