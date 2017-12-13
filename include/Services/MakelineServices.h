#ifndef MAKELINESERVICES_H
#define MAKELINESERVICES_H
#include "Repositories/MakelineFileWorker.h"


class MakelineServices
{
    public:
        MakelineServices();
        void SetStore(string store);
        void GetOrders();
        vector<Order> PrintOrders();
        vector<Order> PrintDoneOrders();
        void DoneOrder(Order order);
        void Finished();
    private:
        vector<Order> theorders;
        vector<Order> ordersdone;
        string _store;
        MakelineFileWorker fw;
};

#endif // MAKELINESERVICES_H
