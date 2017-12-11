#include "Services/CreatePizza.h"
CreatePizza::CreatePizza()
{

    /*_pizzaSize = '\0';
    _comments = "Null";
    _ID = 2017;
    _place = "1";
    _delivery = '1';
    _price = 2000;
    _status = "Preparation";
    _paid = 'n';*/

}

CreatePizza::CreatePizza(vector<string> toppings, char pizzaSize,string comments,int ID,char delivery,string place,int price,string status,char paid)
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

unsigned int CreatePizza::size() const
{
    return _toppings.size();
}

string CreatePizza::at(int i) const
{
   return _toppings[i];
}

int CreatePizza::get_price()
{
    return _price;
}

int CreatePizza::get_id()
{
    return _ID;
}

int CreatePizza::get_Order_Price(int id)
{
    int total_price = 0;
    for(unsigned int i = 0; i < Orders.size(); i++)
    {
        if(Orders[i].get_id() == id)
        {
            total_price += get_price();
        }
    }
    return total_price;

}

ostream& operator <<(ostream& out, const CreatePizza& pizza)
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
