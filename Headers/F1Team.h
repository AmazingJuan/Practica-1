//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_F1TEAM_H
#define PRACTICA1_F1TEAM_H

#endif //PRACTICA1_F1TEAM_H

#include "string"
using namespace std;
class F1Team{
    private:
        string name;
        string brand;
        int foundationYear;
        int thropies;

    public:
        string getName();

        void setName(string name);

        string getBrand();

        void setBrand(string brand);

        int getFoundationYear();

        void setFoundationYear(int foundationYear);

        int getThropies();

        void setThropies(int thropies);
};
