//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_TYREOFF_H
#define PRACTICA1_TYREOFF_H

#endif //PRACTICA1_TYREOFF_H

class TyreOff : public PitCrewTeam {

private:
    int numWheel;
public:
    TyreOff(int numWheel);

    void removeTyre();
    void setNumWheel();
    int getNumWheel();
};
