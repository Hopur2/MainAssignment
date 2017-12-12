<<<<<<< HEAD
//#include "DeliveryService.h"
#include "Services/DeliveryService.h"
=======
#include "Services/DeliveryService.h"

>>>>>>> 8c0d681f73453bdc3a54a2b07343a784cf424009
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
