#ifndef DELIVERYSERVICE_H
#define DELIVERYSERVICE_H
#include "Repositories/MakelineFileWorker.h"


class DeliveryService
{
    public:
        DeliveryService();
        void GetOrders();
        vector<Order> FindOrder(string ssn);
        void SetStore(string store);
        int ConvertToInt(string in);
    private:
        string _store;
        vector<Order> theorders;
        MakelineFileWorker FW;
};

#endif // DELIVERYSERVICE_H
