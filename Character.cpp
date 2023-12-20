#include "Character.hpp"

Character::Character()
{
    name = "Gandalf";
    life = 100;
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}
void Character::rename(string newName)
{
    if (name != "")
    {
        name = newName;
    }
}

void Character::takePotion()
{
    life += 20;
}

void Character::display()
{
    cout << name << " a " << life << " points de vie." << endl;
}