#include "./Headers/F1Team.h"
#include "./Headers/Utilities.h"
int main() {
    //Bienvenida y creacion del equipo de F1.
    cout << "Welcome to the Grand Prix, the following team is due for a pit stop...." << endl;
    congelarPantalla(2);
    F1Team team("Ferrari", "2050", "1");
    team.printInfo();


    return 0;
}
