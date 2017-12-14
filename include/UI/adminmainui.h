#ifndef PIZZAUI_H
#define PIZZAUI_H

#include <vector>
#include "Models/newmenutopping.h"
#include "Services/adminservices.h"

class adminmainUI
{
    public:
        adminmainUI();
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
        AdminServices services;
        NewMenuTopping newmenutopping;



        //PizzaRespository repo;

};

#endif // PIZZAUI_H
