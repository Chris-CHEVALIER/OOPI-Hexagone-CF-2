#include <iostream>
#include <string>
#pragma once

using namespace std;

class Character
{
protected:
    string name;
    int life;

public:
    Character();
    Character(string newName, int newLife);
    void rename(string newName);
    void takePotion();
    virtual void display();
    virtual string getWeapon() = 0;
    virtual ~Character(); // Obligatoire pour supprimer le pointeur d'objet (delete)
};