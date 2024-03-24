//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

class TyreOn : public PitCrewTeam {
private:
    string name;
    int numWheel;
public:
    TyreOn(string name, int numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team);
    void bringTyre();
    void fitTyre();
    void setNumWheel(int numWheel);
    int getNumWheel() const;
};
