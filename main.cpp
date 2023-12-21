#include "Character.cpp"
#include "Wizard.cpp"
#include "Warrior.cpp"
#include <vector>

void introduce(Character &character)
{
    character.display();
}

int main()
{
    // Character gandalf; ABSTRACT !
    Wizard *merlin = new Wizard("Merlin", 80, 120); // Créer des pointeurs d'objet
    Warrior *aragorn = new Warrior("Aragorn", 120, 20);

    /* vector<Warrior> warriors;
    vector<Wizard> wizards; */
    vector<Character *> characters;
    characters.push_back(merlin);
    characters.push_back(aragorn);

    merlin->setLife(150);
    introduce(*merlin);
    introduce(*aragorn);

    /* merlin->display();
    aragorn->display(); */

    characters[0]->display();
    characters[1]->display();

    double a;
    cout << a << endl;

    for (int i = 0; i < characters.size(); i++)
    {
        delete characters[i];
        cout << characters[i]<< endl;
    }

    return 0;
}