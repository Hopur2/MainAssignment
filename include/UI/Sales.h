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
        void CreatePizzaOrder();
        void ValidateUserInput(const CreateOrder& order1);
        void read_order();
        void addTopping(vector<string>& toppings,int& price);
        void GetFromMenu(vector<string>& toppings, int& price, char Size);
        int getprice(char pizzaSize);
        void FailureCheck(int check);
        string Stores();
    private:
        CreatePizza order_service;
        OrderRepository order;
};

#endif // SALES_H

