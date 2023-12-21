#include "Warrior.hpp"

Warrior::Warrior() : Character()
{
    cout << name << " vient d'être créé !";
}

Warrior::Warrior(string newName, int newLife, int newAtk) : Character(newName, newLife)
{
    atk = newAtk;
}

void Warrior::display()
{
    Character::display();
    cout << "C'est un guerrier qui a " << atk << " de points d'attaque." << endl;
}

string Warrior::getWeapon()
{
    return "Épée en acier";
}