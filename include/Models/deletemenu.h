#ifndef DELETEMENU_H
#define DELETEMENU_H

#include <iostream>
#include <string>

#include "Repositories/pizzarespository.h"
using namespace std;

class DeleteMenu
{
    public:
        DeleteMenu();
      string get_name(int id);
      void PrintSpecific(string input);
    protected:
    private:
        int _id;
         vector<NewMenuTopping> menu;
        PizzaRespository pizza_repo;


};

#endif // DELETEMENU_H

