#ifndef PIZZARESPOSITORY_H
#define PIZZARESPOSITORY_H


//#include "Models/deletemenu.h"
#include "Models/topping.h"
#include "Models/pizza.h"
#include "Models/newstuff.h"
#include "Services/newmenutopping.h"
#include "Services/newlocation.h"

#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
class PizzaRespository
{
    public:
        PizzaRespository();
        virtual ~PizzaRespository();

        void storeTopping(const Pizza& pizza);
        void storeNewStuff(const NewStuff& newstuff);
        void retrieveTopping();
        void retrievePizza();
        void GetLocation();
        void newMenu(const NewMenuTopping& newmenutopping);
        void NewLocation(const Newlocation& location);


        void FilterOrders(string line);
        void FilterTopping(string line);
        int Converttoint(string input);
        vector<NewMenuTopping> PassRecords();
        vector<Topping> PassTopping();
        string Converttostring(int input);
        void ReadFile();

    protected:
    private:
       vector<NewMenuTopping> menus;
       vector<Topping> toppings;
};

#endif // PIZZARESPOSITORY_H
