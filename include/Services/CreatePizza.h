#ifndef CREATEPIZZA_H
#define CREATEPIZZA_H
//#include "CreateOrder.h"
#include "Repositories/OrderRepository.h"
#include "Repositories/pizzarespository.h"

class CreatePizza
{
    public:

        CreatePizza();
        int get_Order_Price(string id);
        void add_pizza_to_order(const CreateOrder& order1);
        string get_toppings(int id);
        int getMenuPrice(int id,char Size);
        void ReadMenu();

    private:
        vector<CreateOrder> Orders;
        vector<NewMenuTopping> menu;

        OrderRepository repo;
        PizzaRespository pizza_repo;

};

#endif // PIZZA_H

