#ifndef PIZZAUI_H
#define PIZZAUI_H

#include <vector>
#include "Services/newmenutopping.h"

class PizzaUI
{
    public:
        PizzaUI();
        void create_menu();
        void create_topping();
        void readTopp();
        void readMenu();
        void startUI();
        void delete_menu();
        void New_location();
        void New_Stuff();
    protected:
    private:
        int admno;
        vector<NewMenuTopping> menu;



        //PizzaRespository repo;

};

#endif // PIZZAUI_H
