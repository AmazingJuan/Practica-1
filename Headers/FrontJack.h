//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_FRONTJACK_H
#define PRACTICA1_FRONTJACK_H

#endif //PRACTICA1_FRONTJACK_H

#include "string"
using namespace std;

class FrontJack : public PitCrewTeam {
private:
    string role;

public:
    FrontJack(string role);

    void slideJack();
    void liftCar();
    void setRole();
    string getRole();

};
