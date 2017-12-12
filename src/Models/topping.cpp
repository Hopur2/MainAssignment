#include <string.h>
#include "Models/pizza.h"

Topping::Topping()
{
    //ctor
}


Topping::Topping(char *name, int price)
{

    strcpy(_name, name);
    _price = price;
}

Topping::~Topping()
{
    //dtor
}

istream& operator >>(istream& in, Topping& topping)
{

    in >> topping._name;
    in >> topping._price;
    return in;
}

ostream& operator <<(ostream& out, const Topping& topping)
{

    out << topping._name << "|" << topping._price;


    return out;
}
