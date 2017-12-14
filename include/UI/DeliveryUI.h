#ifndef DELIVERYUI_H
#define DELIVERYUI_H
#include "Services/DeliveryService.h"

using namespace std;

class DeliveryUI
{
    public:
        DeliveryUI();
        void MainMenu();
        void PrintOrder(string ssn);
        void ManageOrder(string ssn);
        void PickStore();
    private:
        DeliveryService DS;
        vector<Order> order;
};

#endif // DELIVERYUI_H
