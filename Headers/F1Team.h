#ifndef PRACTICA1_F1TEAM_H
#define PRACTICA1_F1TEAM_H

#include "string"
#include <iostream>

using namespace std;
//SE HACE USO DE LA ABSTRACCION, SE TIENE LA CAPACIDAD DE CREAR METODOS Y CLASES QUE CORRESPONDAN A UN ASPECTO DE LA VIDA REAL

class F1Team{
    private: //SE HACE USO DEL ENCAPSULAMIENTO AL PROTEGER LOS ATIRBUTOS Y METODOS IMPONINEDOLES UN ACCESO PRIVADO
        string name;
        string foundationYear;
        string thropies;
        string buildInfo();
    public:
        F1Team(string name, string foundationYear, string thropies); //CONSTRUCTOR
        F1Team(); //CONSTRUCTOR POR DEFECTO
        //SETTERS Y GETTERS
        string getName();
        void setName(string name);
        string getFoundationYear();
        void setFoundationYear(int foundationYear);
        string getThropies();
        void setThropies(int thropies);
        //IMPRIME LA INFO DEL EQUIPO DE F1
        void printInfo();
};
#endif //PRACTICA1_F1TEAM_H