//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_TEAMDRIVERA_H
#define PRACTICA1_TEAMDRIVERA_H

#include "PitCrewTeam.h"
//SE HACE USO DE LA ABSTRACCION, SE TIENE LA CAPACIDAD DE CREAR METODOS Y CLASES QUE CORRESPONDAN A UN ASPECTO DE LA VIDA REAL
class TeamDriverA : public PitCrewTeam{//SE HACE USO DE LA HERENCIA, LA PRESENTE CLASE HEREDA DE OTRA(S)
    private: //SE HACE USO DEL ENCAPSULAMIENTO AL PROTEGER LOS ATIRBUTOS Y METODOS IMPONINEDOLES UN ACCESO PRIVADO
        string driverName;
        PitCrewTeam pitTeam;
        string pilotTeam = "A";

    public:
        TeamDriverA(PitCrewTeam pitTeam, string uniqueTalent, string pitTeamName, class F1Team F1Team);
        TeamDriverA() = default;
        void setNombrePiloto (string nombrePiloto);
        string getNombrePiloto();
        void setPitCrewTeam (PitCrewTeam pitTeam);
        PitCrewTeam getPitCrewTeam();
        void setDriverName(string driverName);
        string getDriverName();
};

#endif //PRACTICA1_TEAMDRIVERA_H