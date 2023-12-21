#include "Character.hpp"
#pragma once

class Wizard : public Character
{
private:
    int mana;

public:
    Wizard();
    Wizard(string newName, int newLife, int newMana);
    void castSpell();
    void takeManaPotion();
    void setLife(int newLife);
    void display();
    string getWeapon(); // Oublié !
};