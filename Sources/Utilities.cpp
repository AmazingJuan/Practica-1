#include "../Headers/Utilities.h"


void sleep(int seconds){
    this_thread::sleep_for(chrono::seconds(seconds));
}

void clean(){
    for(int contador = 0; contador < 50; contador++) cout << "\n";
}
