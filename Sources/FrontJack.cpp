//
// Created by Diego on 21/03/2024.
//

#include "../Headers/FrontJack.h"

FrontJack::FrontJack(string role){
    this->role = role;
}

void FrontJack::slideJack(){
    cout << "Deslizando el gato debajo de la parte delantera del coche..." << endl;
    cout << "EL Gato ha sido deslizado correctamente." << endl;
}
void FrontJack::liftCar(){
    cout << "Levantando la parte delantera del coche..." << endl;
    cout << "El Coche ha sido levantado exitosamente." << endl;
}
void FrontJack::setRole(){
    FrontJack::role = role;
}
string FrontJack::getRole(){
    return role;
}