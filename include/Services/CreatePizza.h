#ifndef CREATEPIZZA_H
#define CREATEPIZZA_H
//#include "CreateOrder.h"
#include "Repositories/OrderRepository.h"
#include "Repositories/pizzarespository.h"

class CreatePizza
{
    public:

        CreatePizza();
        void get_Order_Price(string id);
        void add_pizza_to_order(const CreateOrder& order1);

    private:
        vector<CreateOrder> Orders;
        OrderRepository repo;
        PizzaRespository pizza_repo;

};

#endif // PIZZA_H

