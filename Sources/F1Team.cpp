//
// Created by Diego on 21/03/2024.
//

#include "../Headers/F1Team.h"

F1Team::F1Team(int name, int brand, int foundationYear, int thropies){
    this -> name = name;
    this -> brand = brand;
    this -> foundationYear = foundationYear;
    this -> thropies = thropies;
}

string F1Team::getName(){
    return name;
}
void F1Team::setName(string name){
    F1Team::name = name;
}
string F1Team::getBrand(){
    return brand;
}
void F1Team::setBrand(string brand){
    F1Team::brand = brand;
}
int F1Team::getFoundationYear(){
    return foundationYear;
}
void F1Team::setFoundationYear(int foundationYear){
    F1Team::foundationYear = foundationYear;
}
int F1Team::getThropies(){
    return thropies;
}
void F1Team::setThropies(int thropies){
    F1Team::thropies = thropies;
}
