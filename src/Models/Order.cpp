#include "Order.h"

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
    _verbose = true;
}

void Order::SetVerbose(bool b)
{
    _verbose = b;
}

void Order::SetStatus(string s)
{
    _status = s;
}

ostream& operator << (ostream& out, const Order& order)
{
    if(order._verbose)
    {
        out << "ID: " << order._ID << " ";
        out << "Size: " << order._size << " ";
        out << "Toppings: " << order._toppings << " ";
        out << "Comment: " << order._comment << " ";
        out << "Status: " << order._status << endl;
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
