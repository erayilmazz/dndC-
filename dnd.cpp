#include <iostream>
using std::cout;
using std::cin;
using std::endl;


#include "dnd.h"

Character::Character(string name){
    setName(name);
}


void Character::setName(string name){
    characterName = name;
    cout << "Setting the character name to " << name << endl;
}

string Character::getName(){
    return characterName;
}

void Character::chooseClass(string choice){
    if (choice == "fighter") chosenClass = "fighter";
    else if (choice == "ranger") chosenClass = "ranger";
    else if (choice == "wizard") chosenClass = "wizard";
    else if (choice == "tank") chosenClass = "tank";
    else{
        cout << "Not valid stat." << endl;
    }
}

string Character::getClass(){
    return chosenClass;
}

