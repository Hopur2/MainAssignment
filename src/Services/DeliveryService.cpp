#include "Services/DeliveryService.h"

DeliveryService::DeliveryService()
{
    //ctor
    GetOrders();
}

void DeliveryService::GetOrders()
{
    FW.ReadFile("DoneOrders.txt");
    theorders = FW.PassOrders();
}

void DeliveryService::PrintOrders()
{
    cout << theorders.size() << endl;
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        cout << theorders[i];
    }
}
