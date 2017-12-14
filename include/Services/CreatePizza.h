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
        int get_topping_price(int id);
        int getMenuPrice(int id,char Size);
        string get_MenuItem(int id);
        void ReadMenu();
        void ReadToppings();
        int convert_to_int(string input);

    private:
        vector<CreateOrder> Orders;
        vector<NewMenuTopping> menu;
        vector<Topping> toppingMenu;

        OrderRepository repo;
        PizzaRespository pizza_repo;

};

#endif // PIZZA_H

