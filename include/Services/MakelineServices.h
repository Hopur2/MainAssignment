#ifndef MAKELINESERVICES_H
#define MAKELINESERVICES_H
#include "Repositories/MakelineFileWorker.h"


class MakelineServices
{
    public:
        MakelineServices();
        void SetStore(string store);
        void GetOrders();
        void PrintOrders();
        void PrintDoneOrders();
        void DoneOrder(char input);
        void Finished();
    private:
        vector<Order> theorders;
        vector<Order> ordersdone;
        string _store;
        MakelineFileWorker fw;
};

#endif // MAKELINESERVICES_H
