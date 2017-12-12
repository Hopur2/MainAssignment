#ifndef CREATEPIZZA_H
#define CREATEPIZZA_H
//#include "CreateOrder.h"
#include "Repositories/OrderRepository.h"

class CreatePizza
{
    public:

        CreatePizza();
        int get_Order_Price(string id);
        void add_pizza_to_order(const CreateOrder& order1);

    private:
        vector<CreateOrder> Orders;
        OrderRepository repo;
};

#endif // PIZZA_H

