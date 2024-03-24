//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

class TyreGunner : public PitCrewTeam {
private:
    string name;
    int numWheel;
public:
    TyreGunner(int numWheel);

    void loosenNut();
    void removeNut();
    void fitNut();
    void setNumWheel(int numWheel);
    int getNumWheel() const;

};
