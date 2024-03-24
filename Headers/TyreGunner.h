//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

class TyreGunner : public PitCrewTeam {
    private:
        string name;
        int numWheel;
    public:
        TyreGunner(string name, int numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team);

        void loosenNut();
        void removeNut();
        void fitNut();
        string getName();
        void setNumWheel(int numWheel);
        int getNumWheel() const;

};
