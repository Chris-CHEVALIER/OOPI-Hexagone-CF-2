#include "Character.hpp"
#pragma once

class Warrior : public Character
{
private:
    int atk;

public:
    Warrior();
    Warrior(string newName, int newLife, int newAtk);
    void display();
    string getWeapon();
};