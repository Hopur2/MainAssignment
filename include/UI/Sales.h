#ifndef SALES_H
#define SALES_H
#include <iostream>
#include "UI/Menu.h"
#include "Services/CreatePizza.h"
#include "Repositories/OrderRepository.h"



using namespace std;

class Sales
{
    public:
        Sales();
        void salesUI();
        void create_pizza();
        void read_order();
        vector<string> addTopping(vector<string>& toppings);
        getprice(char pizzaSize,vector<string> toppings);
        string Stores();
    private:
        OrderRepository repo;
        vector<CreatePizza> Orders;
};

#endif // SALES_H
