#include "Wizard.hpp"

Wizard::Wizard() : Character()
{
    cout << name << " vient d'être créé !";
}

Wizard::Wizard(string newName, int newLife, int newMana) : Character(newName, newLife)
{
    mana = newMana;
    // cout << name << " vient d'être créé !";
}

void Wizard::castSpell()
{
    cout << "Le mage lance un sort !" << endl;
    mana -= 10;
}

void Wizard::takeManaPotion()
{
    mana += 20;
}

void Wizard::setLife(int newLife)
{
    life = newLife;
}

void Wizard::display()
{
    Character::display();
    cout << "C'est un mage qui a " << mana << " de points de magie." << endl;
}