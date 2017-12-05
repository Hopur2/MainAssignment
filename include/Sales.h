#ifndef SALES_H
#define SALES_H
#include <iostream>
#include "Menu.h"
#include "createpizza.h"
#include "OrderRepository.h"



using namespace std;

class Sales
{
    public:
        Sales();
        void salesUI();
        void create_pizza();
        void read_order();
    private:
        OrderRepository repo;
};

#endif // SALES_H
