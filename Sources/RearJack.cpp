//
// Created by Diego on 21/03/2024.
//

#include "../Headers/RearJack.h"

RearJack::RearJack(string role){
    this -> role = role;
}

void RearJack::slideJack(){
    cout << "Deslizando el gato debajo de la parte trasera del coche..." << endl;
    cout << "EL Gato ha sido deslizado correctamente." << endl;
}
void RearJack::liftCar(){
    cout << "Levantando la parte trasera del coche..." << endl;
    cout << "El coche ha sido levantado exitosamente." << endl;
}
void RearJack::setRole(){
    RearJack::role = role;
}
string RearJack::getRole(){
    return role;
}