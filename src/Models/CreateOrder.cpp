#include "Models/CreateOrder.h"


CreateOrder::CreateOrder(string ID,char delivery,string place,char pizzaSize, vector<string> toppings, string comments,int price,string status,char paid)
{
        _toppings = toppings;
        _pizzaSize = pizzaSize;
        _comments = comments;
        _ID = ID;
        _delivery = delivery;
        _place = place;
        _price = price;
        _status = status;
        _paid = paid;
}

unsigned int CreateOrder::size() const
{
    return _toppings.size();
}

string CreateOrder::at(int i) const
{
   return _toppings[i];
}

int CreateOrder::GetPrice() const
{
    return _price;
}//

string CreateOrder::GetId() const
{
    return _ID;
}

char CreateOrder::GetPaid() const
{
    return _paid;
}

char CreateOrder::GetSize() const
{
    return _pizzaSize;
}

char CreateOrder::GetDelivery() const
{
    return _delivery;
}

ostream& operator <<(ostream& out, const CreateOrder& createOrder)
{
    out << createOrder._ID <<"|" << createOrder._delivery <<"|" << createOrder._place <<"|";
    out << createOrder._pizzaSize<< "|";


    for(unsigned int i = 0; i < createOrder.size();i++)
    {
        out << createOrder.at(i);
        if(i!= createOrder.size()-1)
        {
            out << ",";
        }
    }
    out << "|";
    out << createOrder._comments<< "|";
    out << createOrder._price <<"|"<< createOrder._status<<"|"<<createOrder._paid<<"|";
    //out << endl;

    return out;
}
