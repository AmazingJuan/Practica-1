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
    sleep(5); //Congela la pantalla por 5 segundos
    clean(); //Limpia la pantalla

    F1Team team("Red Bull Racing", "2005", "7"); //Se crea una instancia de la clase F1
    team.printInfo(); //Se imprime la informacion de el equipo de F1
    sleep(5);
    clean();

    //SE HACE USO DEL POLIMORFISMO EN LAS LINEAS QUE SIGUEN, SE CREAN INSTANCIAS DE UNA CLASE CON DISTINTOS ATRIBUTOS Y CARACTERISTICAS.

    PitCrewTeam pitTeam("Agility", "Red Bull Pits", team, "Max Verstappen", "Sergio Pérez"); //Creacion del PitCrewTeam
    pitTeam.presentation(); //Presentación del pitTeam.
    clean();

    //Definición de los TyreGunner (instancias de Tyre Gunner)

    TyreGunner tyre1("Maria", "1", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreGunner tyre2("Carlos", "2", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreGunner tyre3("Rigoberto", "3", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreGunner tyre4("Albert", "4", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Definición de los tyreoff (instancias de Tyre off)

    TyreOff off1("Indigo", "1", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOff off2("Diego", "2", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOff off3("Narciso", "3", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOff off4("Wilson", "4", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Deficion de los Tyre on (instancias de Tyre on)

    TyreOn on1("Sofia", "1", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOn on2("Alejandro", "2", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOn on3("Valentina", "3", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    TyreOn on4("Juan", "4", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Definición de los FrontJack (instancias de FrontJack)

    FrontJack front1("Marlon", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    FrontJack front2("Javier", '2', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Definición de Rear Jack (instancias de Rear jack)

    RearJack rear1("Carlos", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    RearJack rear2("Mirta", '2', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Definición de side jack (instancias de los Side Jack)

    SideJack side1("Isabella", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    SideJack side2("Cirilo", '2', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Definición de FrontWingAdjust (instancias de FrontWing adjust)

    FrontWingAdjust frontWing1("Angelica", 1, pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);
    FrontWingAdjust frontWing2("Juan Palas", '1', pitTeam, pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);

    //Definición del Lollipop man (Instancia de lollipop man)

    LollipopMan loli("Ernesto", pitTeam.getUniqueTalent(), pitTeam.getPitName(), team);


    //Trabajo de cada integrante del Pit Team a la hora de llegada del COCHE A

    cout << "========================================== CAR 'A' ARRIVES ==========================================\n\n";

    cout << "CAR 'A' DRIVER: " << pitTeam.getDriverA() << endl;
    cout << "Front Jack: " + front1.getName() + front1.slideJack() << " and" << front1.liftCar() << endl;
    cout << "Rear Jack: " + rear1.getName() + rear1.slideJack() << "and" << rear1.liftCar() << endl;
    cout << "Side Jack: " + side1.getName() + side1.liftCar() << " and" << side1.stabilizeCar() << endl << endl;
    cout << "========================================== CAR 'A' ARRIVES ==========================================";

    sleep(10);
    clean();
    cout << "========================================== REMOVING NUTS ==========================================\n\n";
    cout << "Tyre Gunner: " + tyre1.getName() + tyre1.loosenNut() << " and" << tyre1.removeNut() << endl;
    cout << "Tyre Gunner: " + tyre2.getName() + tyre2.loosenNut() << " and" << tyre2.removeNut() << endl ;
    cout << "Tyre Gunner: " + tyre3.getName() + tyre3.loosenNut() << " and" << tyre3.removeNut() << endl;
    cout << "Tyre Gunner: " + tyre4.getName() + tyre4.loosenNut() << " and" << tyre4.removeNut() << endl;
    cout << "Front Wing Adjust: " + frontWing1.getName() + frontWing1.turnScrew() << "and" << frontWing1.adjustFlap() << endl << endl;
    cout << "========================================== REMOVING NUTS ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== REMOVING TYRES ==========================================\n\n";
    cout << "Tyre Off: " + off1.getName() + off1.removeTyre() << endl;
    cout << "Tyre Off: " + off2.getName() + off2.removeTyre() << endl;
    cout << "Tyre Off: " + off3.getName() + off3.removeTyre() << endl;
    cout << "Tyre Off: " + off4.getName() + off4.removeTyre() << endl << endl;
    cout << "========================================== REMOVING TYRES ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== FITTING TYRES ==========================================\n\n";
    cout << "Tyre On: " + on1.getName() + on1.bringTyre() << " and" << on1.fitTyre() << endl;
    cout << "Tyre On: " + on2.getName() + on2.bringTyre() << " and" << on2.fitTyre() << endl;
    cout << "Tyre On: " + on3.getName() + on3.bringTyre() << " and" << on3.fitTyre() << endl;
    cout << "Tyre On: " + on4.getName() + on4.bringTyre() << " and" << on4.fitTyre() << endl << endl;
    cout << "========================================== FITTING TYRES ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== FITTING NUTS ==========================================\n\n";
    cout << "Tyre Gunner: " + tyre1.getName() + tyre1.fitNut() << endl;
    cout << "Tyre Gunner: " + tyre2.getName() + tyre2.fitNut() << endl;
    cout << "Tyre Gunner: " + tyre3.getName() + tyre3.fitNut() << endl;
    cout << "Tyre Gunner: " + tyre4.getName() + tyre4.fitNut() << endl << endl;
    cout << "========================================== FITTING NUTS ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== LOLLIPOP MAN ==========================================\n\n";
    cout << "Lollipop Man: " + loli.getName() + loli.findSafeSpace() << " and" << loli.giveSignal() << endl << endl;
    cout << "========================================== LOLLIPOP MAN ==========================================\n\n";


    //TRABAJO DE CADA UNO DE OS INTEGRANTES PARA EL COCHE B

    sleep(20);
    clean();
    cout << "========================================== CAR 'B' ARRIVES ==========================================\n\n";

    cout << "CAR 'B' DRIVER: " << pitTeam.getDriverB() << endl;
    cout << "Front Jack: " + front2.getName() + front2.slideJack() << " and" << front2.liftCar() << endl;
    cout << "Rear Jack: " + rear2.getName() + rear2.slideJack() << " and" << rear2.liftCar() << endl;
    cout << "Side Jack: " + side2.getName() + side2.liftCar() << " and" << side2.stabilizeCar() << endl << endl;
    cout << "========================================== CAR 'B' ARRIVES ==========================================";

    sleep(10);
    clean();
    cout << "========================================== REMOVING NUTS ==========================================\n\n";
    cout << "Tyre Gunner: " + tyre1.getName() + tyre1.loosenNut() << " and" << tyre1.removeNut() << endl;
    cout << "Tyre Gunner: " + tyre2.getName() + tyre2.loosenNut() << " and" << tyre2.removeNut() << endl ;
    cout << "Tyre Gunner: " + tyre3.getName() + tyre3.loosenNut() << " and" << tyre3.removeNut() << endl;
    cout << "Tyre Gunner: " + tyre4.getName() + tyre4.loosenNut() << " and" << tyre4.removeNut() << endl;
    cout << "Front Wing Adjust: " + frontWing2.getName() + frontWing2.turnScrew() << "and" << frontWing2.adjustFlap() << endl << endl;
    cout << "========================================== REMOVING NUTS ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== REMOVING TYRES ==========================================\n\n";
    cout << "Tyre Off: " + off1.getName() + off1.removeTyre() << endl;
    cout << "Tyre Off: " + off2.getName() + off2.removeTyre() << endl;
    cout << "Tyre Off: " + off3.getName() + off3.removeTyre() << endl;
    cout << "Tyre Off: " + off4.getName() + off4.removeTyre() << endl << endl;
    cout << "========================================== REMOVING TYRES ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== FITTING TYRES ==========================================\n\n";
    cout << "Tyre On: " + on1.getName() + on1.bringTyre() << " and" << on1.fitTyre() << endl;
    cout << "Tyre On: " + on2.getName() + on2.bringTyre() << " and" << on2.fitTyre() << endl;
    cout << "Tyre On: " + on3.getName() + on3.bringTyre() << " and" << on3.fitTyre() << endl;
    cout << "Tyre On: " + on4.getName() + on4.bringTyre() << " and" << on4.fitTyre() << endl << endl;
    cout << "========================================== FITTING TYRES ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== FITTING NUTS ==========================================\n\n";
    cout << "Tyre Gunner: " + tyre1.getName() + tyre1.fitNut() << endl;
    cout << "Tyre Gunner: " + tyre2.getName() + tyre2.fitNut() << endl;
    cout << "Tyre Gunner: " + tyre3.getName() + tyre3.fitNut() << endl;
    cout << "Tyre Gunner: " + tyre4.getName() + tyre4.fitNut() << endl << endl;
    cout << "========================================== FITTING NUTS ==========================================\n\n";

    sleep(10);
    clean();
    cout << "========================================== LOLLIPOP MAN ==========================================\n\n";
    cout << "Lollipop Man: " + loli.getName() + loli.findSafeSpace() << " and" << loli.giveSignal() << endl << endl;
    cout << "========================================== LOLLIPOP MAN ==========================================\n\n";

    return 0;
}