#ifndef DELIVERYSERVICE_H
#define DELIVERYSERVICE_H
#include "Repositories/MakelineFileWorker.h"


class DeliveryService
{
    public:
        DeliveryService();
        void GetOrders();
        void PrintOrders();
    private:
        vector<Order> theorders;
        MakelineFileWorker FW;
};

#endif // DELIVERYSERVICE_H
