#include "../Headers/Utilities.h"


void sleep(int seconds){ //FUNCION PARA CONGELAR LA PANTALLA
    this_thread::sleep_for(chrono::seconds(seconds));
}

void clean(){ //FUNCION PARA LIMPIAR PANTALLA
    for(int contador = 0; contador < 50; contador++) cout << "\n";
}
