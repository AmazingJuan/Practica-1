//
// Created by juanp on 21/3/2024.
//

#include "PitCrewTeam.h"
//SE HACE USO DE LA ABSTRACCION, SE TIENE LA CAPACIDAD DE CREAR METODOS Y CLASES QUE CORRESPONDAN A UN ASPECTO DE LA VIDA REAL

class TyreGunner : public PitCrewTeam {//SE HACE USO DE LA HERENCIA, LA PRESENTE CLASE HEREDA DE OTRA(S)
    private://SE HACE USO DEL ENCAPSULAMIENTO AL PROTEGER LOS ATIRBUTOS Y METODOS IMPONINEDOLES UN ACCESO PRIVADO
        string name;
        string numWheel;
    public:
        TyreGunner(string name, string numWheel, string uniqueTalent, string pitTeamName, class F1Team F1Team);

        string loosenNut();
        string removeNut();
        string fitNut();
        string getName();
        void setNumWheel(string numWheel);
        string getNumWheel() const;

};
