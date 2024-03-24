//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

class TyreOn : public PitCrewTeam {
private:
    int numWheel;
public:

    TyreOn(int numWheel);
    void bringTyre();
    void fitTyre();
    void setNumWheel(int numWheel);
    int getNumWheel() const;
};
