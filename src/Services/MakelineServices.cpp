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
void MakelineServices::PrintOrders()
{
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        if(_store == theorders[i].GetLocation())
        {
            cout << i << " " << theorders[i];
        }
    }
}
void MakelineServices::PrintDoneOrders()
{
    for(unsigned int i = 0; i < ordersdone.size(); i++)
    {
        cout << i << " " << ordersdone[i];
    }
}

void MakelineServices::DoneOrder(char input)
{
    unsigned int temp = input - '0';
    if(temp < 0 || temp > theorders.size())
    {
        throw input;
    }
    theorders[temp].SetStatus("Ready");
    ordersdone.push_back(theorders[temp]);
    theorders.erase(theorders.begin()+temp);
}
void MakelineServices::Finished()
{
    fw.WriteOrders("Orders.txt", "DoneOrders.txt", theorders, ordersdone);
}
