#ifndef DELIVERYSERVICE_H
#define DELIVERYSERVICE_H
#include "Repositories/MakelineFileWorker.h"


class DeliveryService
{
    public:
        DeliveryService();
        void GetOrders();
        vector<Order> FindOrder(string ssn);
        void OrderPayed(string ssn);
        void OrderDelivered(string ssn);
        void SetStore(string store);
        int ConvertToInt(string in);
    private:
        string _store;
        vector<Order> theorders;
        vector<Order> deliveredorders;
        MakelineFileWorker FW;
};

#endif // DELIVERYSERVICE_H
