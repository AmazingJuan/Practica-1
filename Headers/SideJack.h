//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_SIDEJACK_H
#define PRACTICA1_SIDEJACK_H

#endif //PRACTICA1_SIDEJACK_H

#include "string"
using namespace std;

class SideJack : public PitCrewTeam {

private:
    string side;
public:
    SideJack(string side);

    void stabilizeCar();
    void liftCar();
    void setSide();
    string getSide();
};
