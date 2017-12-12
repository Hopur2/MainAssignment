#ifndef PIZZARESPOSITORY_H
#define PIZZARESPOSITORY_H


//#include "Models/deletemenu.h"

#include "Models/pizza.h"
#include "Models/newstuff.h"
#include "Services/newmenutopping.h"
#include "Services/newlocation.h"
#include "Models/topping.h"
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
        int Converttoint(string input);
        vector<NewMenuTopping> PassRecords();
        string Converttostring(int input);
        void ReadFile();

    protected:
    private:
       vector<NewMenuTopping> Orders;
};

#endif // PIZZARESPOSITORY_H
