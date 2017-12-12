#ifndef MAKELINEFILEWORKER_H
#define MAKELINEFILEWORKER_H
#include "Models/Order.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


class MakelineFileWorker
{
    public:
        MakelineFileWorker();
        void ReadFile(string file);
        void FilterFile(string lineorder);
        int Convertoint(string toconvert);
        void WriteOrders(string file1, string file2, vector<Order> Orders, vector<Order> DoneOrders);
        vector<Order> PassOrders();
   private:
        vector<Order> _Orders;
        vector<Order> _DoneOrders;
};

#endif // MAKELINEFILEWORKER_H
