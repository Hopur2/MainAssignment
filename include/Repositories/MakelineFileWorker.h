#ifndef MAKELINEFILEWORKER_H
#define MAKELINEFILEWORKER_H
#include "Models/Order.h"
#include <fstream>
#include <vector>
#include <sstream>


class MakelineFileWorker
{
    public:
        MakelineFileWorker();
        void ReadFile();
        void FilterFile(string lineorder);
        int Convertoint(string toconvert);
        void WriteOrders(vector<Order> Orders, vector<Order> DoneOrders);
        vector<Order> PassOrders();
   private:
        vector<Order> _Orders;
        vector<Order> _DoneOrders;
};

#endif // MAKELINEFILEWORKER_H
