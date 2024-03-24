#ifndef PRACTICA1_PITCREWTEAM_H
#define PRACTICA1_PITCREWTEAM_H

#include "string"
#include "F1Team.h"

using namespace std;
//SE HACE USO DE LA ABSTRACCION, SE TIENE LA CAPACIDAD DE CREAR METODOS Y CLASES QUE CORRESPONDAN A UN ASPECTO DE LA VIDA REAL
class PitCrewTeam{
    private: //SE HACE USO DEL ENCAPSULAMIENTO AL PROTEGER LOS ATIRBUTOS Y METODOS IMPONINEDOLES UN ACCESO PRIVADO
        string uniqueTalent;
        string pitTeamName;
        string driverA;
        string driverB;
        F1Team F1Team;
        bool isSameTeam(class F1Team team1, class F1Team team2);
        string buildPresentation();

    public:
        //CONSTRUCTORES SOBRECARGADOS
        PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team, string driverA, string driverB);
        PitCrewTeam(string uniqueTalent, string pitTeamName, class F1Team F1Team);
        PitCrewTeam();
        void presentation(); //ACCION
        //SETTERS Y GETTERS
        void setUniqueTalent(string uniqueTalent);
        string getUniqueTalent();
        void setPitName(string pitTeamName);
        string getPitName();
        void setF1Team(class F1Team F1Team);
        class F1Team getF1Team();
        string getDriverA();
        void setDriverA(string driverA);
        string getDriverB();
        void setDriverB(string driverA);
};
#endif //PRACTICA1_PITCREWTEAM_H