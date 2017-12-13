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

        void storeTopping(const Topping& pizza);
        void storeNewStuff(const Topping& topping);
        void retrieveTopping();
        void retrievePizza();
        void GetLocation();
        void newMenu(const NewMenuTopping& newmenutopping);
        void NewLocation(const Newlocation& location);


        void ReadSides();
        void FilterSides(string line);


        void ReadTopping();
        void FilterMenu(string line);
        void FilterTopping(string line);
        int Converttoint(string input);
        vector<NewMenuTopping> PassMenu();
        vector<Topping> PassTopping();
        string Converttostring(int input);
        void ReadMenu();

    protected:
    private:

       vector<NewMenuTopping> menu;
       vector<Topping> toppings;

};

#endif // PIZZARESPOSITORY_H
