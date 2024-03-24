//
// Created by juanp on 21/3/2024.
//

#ifndef PRACTICA1_F1TEAM_H
#define PRACTICA1_F1TEAM_H

#include "string"
#include <iostream>

using namespace std;
class F1Team{
    private:
        string name;
        string foundationYear;
        string thropies;
        string buildInfo();
    public:
        F1Team(string name, string foundationYear, string thropies);
        F1Team();
        string getName();
        void setName(string name);
        string getFoundationYear();
        void setFoundationYear(int foundationYear);
        string getThropies();
        void setThropies(int thropies);
        void printInfo();
};
#endif //PRACTICA1_F1TEAM_H