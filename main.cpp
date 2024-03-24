#include "./Headers/F1Team.h"
#include "Headers/PitCrewTeam.h"
#include "Headers/TyreGunner.h"
#include "./Headers/Utilities.h"
#include "Headers/TyreOff.h"
#include "Headers/TyreOn.h"
#include "Headers/FrontJack.h"
#include "Headers/RearJack.h"
#include "Headers/SideJack.h"
#include "Headers/FrontWingAdjust.h"
#include "Headers/LollipopMan.h"


int main() {
    //Bienvenida y creacion del equipo de F1.
    cout << "Welcome to the Grand Prix, the following team is due for a pit stop...." << endl;
    sleep(5);
    clean();
    F1Team team("Red Bull Racing", "2005", "7");
    team.printInfo();

    //Creacion del PitCrewTeam

    PitCrewTeam pitTeam("Agility", "Red Bull Pits", team, "Max Verstappen", "Sergio Pérez");
    pitTeam.presentation();


    //Definición de los TyreGunner
    TyreGunner tyre1("Maria", 1, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreGunner tyre2("Carlos", 2, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreGunner tyre3("Rigoberto", 3, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreGunner tyre4("Albert", 4, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    // Accion de los tyregunner


    //Definición de los tyreoff
    TyreOff off1("Indigo", 1, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOff off2("Diego", 2, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOff off3("Narciso", 3, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOff off4("Wilson", 4, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Accion de los tyreoff


    //Deficion de los tyreon
    TyreOn on1("Sofia", 1, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOn on2("Alejandro", 2, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOn on3("Valetina", 3, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOn on4("Juan", 4, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);


    //Accion de los TyreOn

    //Definicion de los FrontJack
    FrontJack front1("Marlon", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    FrontJack front2("Javier", '2', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Acción de los FrontJack

    //Definición de Rear Jack
    RearJack rear1("Carlos", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    RearJack rear2("Mirta", '2', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);


    //Accion de rear jack

    //Definicion de side jack
    SideJack side1("Isabella", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    SideJack side2("Cirilo", '2', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Accion de side jack

    //Definicion de FrontWingAdjust
    FrontWingAdjust frontWing1("Angelica", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    FrontWingAdjust frontWing2("Juan Palas", '1', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Definición del Lollipop man
    LollipopMan loli("Ernesto", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //========================= QUITAR TUERCAS ================================
    // Nombre de mecanico: Maria
    // Accion: Quité la tuerca de la llanta 1 exitosamente

    // Nombre de mecanico: Carlos
    // Accion: Quite las tuercas de la llanta 2 exitosamente.


    // Historia... (Ponerlo en inglés)

    cout << "El Auto ha llegado" << 
    return 0;
}