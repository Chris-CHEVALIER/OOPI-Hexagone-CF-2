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
    void display();
};