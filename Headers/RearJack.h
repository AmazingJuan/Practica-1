//
// Created by juanp on 21/3/2024.
//

#include "string"
#include "TeamDriverA.h"
#include "TeamDriverB.h"

using namespace std;
//SE HACE USO DE LA ABSTRACCION, SE TIENE LA CAPACIDAD DE CREAR METODOS Y CLASES QUE CORRESPONDAN A UN ASPECTO DE LA VIDA REAL
class RearJack : public TeamDriverA, TeamDriverB {//SE HACE USO DE LA HERENCIA, LA PRESENTE CLASE HEREDA DE OTRA(S)
    private: //SE HACE USO DEL ENCAPSULAMIENTO AL PROTEGER LOS ATIRBUTOS Y METODOS IMPONINEDOLES UN ACCESO PRIVADO
        string name;
    public:
        //SE HACE USO DEL POLIMORFISMO, SE DEFINEN METODOS SOBRECARGADOS
        RearJack(string name, char team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        RearJack(string name, int team, PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        string slideJack(); //ACCION
        string liftCar(); //ACCION
        string getName();
        string setName(string name);
};

