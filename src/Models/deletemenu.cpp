#include "deletemenu.h"


#include "Repositories/pizzarespository.h"
DeleteMenu::DeleteMenu()
{
    pizza_repo.ReadMenu();
    menu = pizza_repo.PassMenu();
}

string DeleteMenu::get_name(int id)
{
    string name;
    for(unsigned int i = 0; i < menu.size(); i++)
    {
        if(menu[i].getID() == id)
        {
            name = menu[i].getName();
        }
    }

    return name;
}

void DeleteMenu::PrintSpecific(string input)
{
    PizzaRespository ER;
    ER.FindInFile(input);
}

