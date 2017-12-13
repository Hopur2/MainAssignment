#include "Services/MakelineServices.h"

MakelineServices::MakelineServices()
{
    //ctor
    GetOrders();
}
void MakelineServices::SetStore(string store)
{
    _store = store;
}
void MakelineServices::GetOrders()
{
    fw.ReadFile("Orders.txt");
    theorders = fw.PassOrders();
}
vector<Order> MakelineServices::PrintOrders()
{
    vector<Order> orders;
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        if(_store == theorders[i].GetLocation())
        {
            orders.push_back(theorders[i]);
        }
    }

    return orders;
}
vector<Order> MakelineServices::PrintDoneOrders()
{
    return ordersdone;
}

void MakelineServices::DoneOrder(Order order)
{
    int temp = 0;
    bool found = 0;
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        if(theorders[i].GetID() == order.GetID() && theorders[i].GetToppings() == order.GetToppings())
        {
            temp = i;
            found = true;
            break;
        }
    }
    if(found)
    {
        theorders[temp].SetStatus("Ready");
        ordersdone.push_back(theorders[temp]);
        theorders.erase(theorders.begin()+temp);
    }
    else
    {
        throw "Not Found";
    }
}
void MakelineServices::Finished()
{
    fw.WriteOrders("Orders.txt", "DoneOrders.txt", theorders, ordersdone);
}

