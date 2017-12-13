#include "Models/Order.h"

Order::Order(int ID, int Deliver, string Location, char Size, string Toppings, string Comment, int Prize, string Status, int Payed)
{
    //ctor
    _ID = ID;
    _deliver = Deliver;
    _location = Location;
    _size = Size;
    _toppings = Toppings;
    _comment = Comment;
    _prize = Prize;
    _status = Status;
    _payed = Payed;
    _verbose = 1;
}

int Order::GetID()
{
    return _ID;
}

int Order::GetPrize()
{
    return _prize;
}

int Order::GetPayed()
{
    return _payed;
}

string Order::GetLocation()
{
    return _location;
}

string Order::GetToppings()
{
    return _toppings;
}

void Order::SetVerbose(int b)
{
    _verbose = b;
}

void Order::SetStatus(string s)
{
    _status = s;
}

ostream& operator << (ostream& out, const Order& order)
{
    if(order._verbose == 1)
    {
        out << "ID: " << order._ID << " ";
        out << "Size: " << order._size << " ";
        out << "Toppings: " << order._toppings << " ";
        out << "Comment: " << order._comment << " ";
        out << "Status: " << order._status << endl;
    }
    else if(order._verbose == 2)
    {
        out << "Size: " << order._size << " ";
        out << "Toppings: " << order._toppings << "\t\t\t";
        out << "Status: " << order._status << " ";
        out << "Prize: " << order._prize << endl;
    }
    else
    {
        out << order._ID << "|";
        out << order._deliver << "|";
        out << order._location << "|";
        out << order._size << "|";
        out << order._toppings << "|";
        out << order._comment << "|";
        out << order._prize << "|";
        out << order._status << "|";
        out << order._payed << "|" << endl;
    }

    return out;
}
