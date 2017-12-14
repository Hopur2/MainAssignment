#ifndef SALES_H
#define SALES_H

#include "UI/Menu.h"
#include "Models/CreateOrder.h"
#include "Services/CreatePizza.h"

class Sales
{
    public:
        Sales();
        void salesUI();
        void create_pizza();
        void read_order();
        void addTopping(vector<string>& toppings,int& price);
        void GetFromMenu(vector<string>& toppings, int& price, char Size);
        int getprice(char pizzaSize);
        string Stores();
    private:
        CreatePizza order_service;
        OrderRepository order;
};

#endif // SALES_H

