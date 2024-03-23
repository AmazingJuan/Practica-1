//
// Created by Diego on 21/03/2024.
//

#include "../Headers/SideJack.h"

SideJack::SideJack(string side){
    this -> side = side;
}

void SideJack::stabilizeCar(){
    cout << "Estabilizando el coche para mantenerlo lo más quieto posible..." << endl;
}
void SideJack::liftCar(){
    cout << "Levantando el coche..." << endl;
    cout << "El coche ha sido levantado correctamente." << endl;
}
void SideJack::setSide(string side){
    SideJack::side = side;
}
string SideJack::getSide(){
    return side;
}