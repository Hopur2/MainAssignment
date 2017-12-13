#include "Services/DeliveryService.h"

DeliveryService::DeliveryService()
{
    //ctor
}

void DeliveryService::GetOrders()
{
    FW.ReadFile("DoneOrders.txt");
    theorders = FW.PassOrders();
}

vector<Order> DeliveryService::FindOrder(string ssn)
{
    vector<Order> foundorder;
    int tempid = ConvertToInt(ssn);
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        if(theorders[i].GetID() == tempid)
        {
            foundorder.push_back(theorders[i]);
        }
    }
    return foundorder;
}

void DeliveryService::SetStore(string store)
{
    _store = store;
    GetOrders();
}

int DeliveryService::ConvertToInt(string in)
{
    int out = 0;
    stringstream ss;
    ss << in;
    ss >> out;

    return out;
}
