#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include "Services/CreatePizza.h"
#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>

class OrderRepository
{
    public:
        OrderRepository();
        void storePizza(const CreatePizza& pizza);
        void FilterOrders(string line);
        int Converttoint(string input);
        vector<CreatePizza> PassRecords();
        string Converttostring(int input);
        void ReadFile();

    private:
        vector<CreatePizza> Orders;
};

#endif // ORDERREPOSITORY_H
