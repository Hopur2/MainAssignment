#ifndef PIZZARESPOSITORY_H
#define PIZZARESPOSITORY_H


//#include "Models/deletemenu.h"
#include "Models/pizza.h"
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
        void retrieveTopping();
        void retrievePizza();
        void GetLocation();
        void newMenu(const NewMenuTopping& newmenutopping);
        void NewLocation(const Newlocation& location);
   /*     void ReadFile();
        int Convertoint(string toconvert);
        void FilterFile(string lineorder);
//        void WriteOrders(vector<Order> Orders, vector<Order> DoneOrders);
        vector<DeleteMenu> PassOrders();*/

    protected:
    private:
     //   vector<DeleteMenu> _Orders;
       // vector<DeleteMenu> _DoneOrders;
};

#endif // PIZZARESPOSITORY_H
