#include <string.h>
#include "Models/pizza.h"
#include "Models/newstuff.h"
Topping::Topping()
{
    //ctor
}


Topping::Topping(int id, string name, int price)
{
    _id = id;
    _name = name;
    _price = price;
}

Topping::~Topping()
{
    //dtor
}
istream& operator >>(istream& in, Topping& topping)
{
    in >> topping._id;
    in >> topping._name;
    in >> topping._price;
    return in;
}
ostream& operator <<(ostream& out, const Topping& topping)
{

    out << topping._id << "|" << topping._name << "|" << topping._price << "|" << endl;


    return out;
}
int Topping::getID()
{
    return _id;
}
int Topping::getPrice()
{
    return _price;
}

string Topping::getName()
{
    return _name;
}
