//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"

class TyreOff : public PitCrewTeam {

private:
    int numWheel;
public:
    TyreOff(int numWheel);

    void removeTyre();
    void setNumWheel(int numWheel);
    int getNumWheel() const;
};
