#include "../Headers/F1Team.h"

F1Team::F1Team(string name, string foundationYear, string thropies){
    this -> name = name;
    this -> foundationYear = foundationYear;
    this -> thropies = thropies;
}

F1Team::F1Team() = default;

string F1Team::buildInfo() { //CONSTRUYE LA INFORMACION DEL EQUIPO
    string info = "========================================== F1 TEAM: " + name + " ==========================================\n\nFoundation Year: " + foundationYear +
            "\nThropies: " + thropies + "\n\n========================================== F1 TEAM: " + name + " ==========================================\n";
    return info;
}

void F1Team::printInfo() {//Imprime la informacion del equipo
    cout << buildInfo();
}

//SETTERS Y GETTERS
string F1Team::getName(){
    return name;
}
void F1Team::setName(string name){
    F1Team::name = name;
}
string F1Team::getFoundationYear(){
    return foundationYear;
}
void F1Team::setFoundationYear(int foundationYear){
    F1Team::foundationYear = foundationYear;
}
string F1Team::getThropies(){
    return thropies;
}
void F1Team::setThropies(int thropies){
    F1Team::thropies = thropies;
}
