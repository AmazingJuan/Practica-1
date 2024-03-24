#ifndef PRACTICA1_UTILITIES_H
#define PRACTICA1_UTILITIES_H

#include "thread"
using namespace std;

void congelarPantalla(int seconds){
    this_thread::sleep_for(chrono::seconds(seconds));
}

#endif //PRACTICA1_UTILITIES_H
