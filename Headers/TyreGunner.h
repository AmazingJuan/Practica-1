//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_TYREGUNNER_H
#define PRACTICA1_TYREGUNNER_H

#endif //PRACTICA1_TYREGUNNER_H

class TyreGunner : public PitCrewTeam {
private:
    int numWheel;
public:
    TyreGunner(int numWheel);

    void loosenNut();
    void removeNut();
    void fitNut();
    void setNumWheel(int numWheel);
    int getNumWheel();

};
