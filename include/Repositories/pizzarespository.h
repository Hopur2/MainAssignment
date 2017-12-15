#ifndef PIZZARESPOSITORY_H
#define PIZZARESPOSITORY_H


//#include "Models/deletemenu.h"

#include "Models/topping.h"
#include "Models/pizza.h"
#include "Models/newstuff.h"
#include "Models/newlocation.h"
#include "Models/newmenutopping.h"


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
        void storeNewSides(const Topping& topping);
        void storeNewlocation(const Newlocation& location);
        void retrieveTopping();
        void retrievePizza();
        void GetLocation();
        void newMenu(const NewMenuTopping& newmenutopping);
        string FindInFile(string input);
        void ReadSides();
        void ReadLocation();
        void FilterLocation(string line);
        void FilterSides(string line);
        void ReadTopping();
        void FilterMenu(string line);
        void FilterTopping(string line);
        int Converttoint(string input);
        vector<NewMenuTopping> PassMenu();
        vector<Topping> PassTopping();
        vector<Newlocation> PassLocation();
        vector<NewStuff> passSides();
        string Converttostring(int input);
        void ReadMenu();
    protected:
    private:
       vector<NewMenuTopping> menu;
       vector<Topping> toppings;
       vector<Newlocation> location;
//       vector<newstuff> sides;

};

#endif // PIZZARESPOSITORY_H
