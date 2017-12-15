#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H

#include "Models/CreateOrder.h"
#include <fstream>
#include <sstream>

class OrderRepository
{
    public:
        OrderRepository();
        void StorePizza(const CreateOrder& pizza);
        void FilterOrders(string line);
        int Converttoint(string input);
        vector<CreateOrder> PassRecords();
        string Converttostring(int input);
        void ReadFile();

    private:
        vector<CreateOrder> Orders;
};

#endif // ORDERREPOSITORY_H
