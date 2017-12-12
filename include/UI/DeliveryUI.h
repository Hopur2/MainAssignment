#ifndef DELIVERYUI_H
#define DELIVERYUI_H
#include "Services/DeliveryService.h"

using namespace std;

class DeliveryUI
{
    public:
        DeliveryUI();
        void MainMenu();
    private:
        DeliveryService DS;
};

#endif // DELIVERYUI_H
