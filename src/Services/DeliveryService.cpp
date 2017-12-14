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

void DeliveryService::OrderPayed(string ssn)
{
    int tempid = ConvertToInt(ssn);
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        if(theorders[i].GetID() == tempid)
        {
            theorders[i].SetPayed(1);
        }
    }

    FW.WriteOrders("DoneOrders.txt", "LegacyOrders.txt", theorders, deliveredorders);
}

void DeliveryService::OrderDelivered(string ssn)
{
    OrderPayed(ssn);
    deliveredorders.clear();
    int tempid = ConvertToInt(ssn);
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        if(theorders[i].GetID() == tempid)
        {
            theorders[i].SetStatus("Delivered");
            deliveredorders.push_back(theorders[i]);
            theorders.erase(theorders.begin()+i);
            i -= 1;
        }
    }

    FW.WriteOrders("DoneOrders.txt", "LegacyOrders.txt", theorders, deliveredorders);
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
