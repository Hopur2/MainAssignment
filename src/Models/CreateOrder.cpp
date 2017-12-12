#include "CreateOrder.h"


CreateOrder::CreateOrder(vector<string> toppings, char pizzaSize,string comments,string ID,char delivery,string place,int price,string status,char paid)
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

int CreateOrder::get_price()
{
    return _price;
}

string CreateOrder::get_id()
{
    return _ID;
}

ostream& operator <<(ostream& out, const CreateOrder& pizza)
{
    out << pizza._ID <<"|" << pizza._delivery <<"|" << pizza._place <<"|";
    out << pizza._pizzaSize<< "|";


    for(unsigned int i = 0; i < pizza.size();i++)
    {
        out << pizza.at(i);
        if(i!= pizza.size()-1)
        {
            out << ",";
        }
    }
    out << "|";
    out << pizza._comments<< "|";
    out << pizza._price <<"|"<< pizza._status<<"|"<<pizza._paid<<"|";
    //out << endl;

    return out;
}
