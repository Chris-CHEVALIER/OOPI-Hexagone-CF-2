#include "Character.cpp"
#include "Wizard.cpp"

int main()
{
    Character gandalf;
    Wizard merlin("Merlin", 80, 120);

    gandalf.takePotion();
    merlin.setLife(150);
    gandalf.display();
    merlin.display();

    return 0;
}