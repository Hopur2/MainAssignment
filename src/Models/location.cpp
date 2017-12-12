#include <string.h>
#include <fstream>
#include "Models/location.h"

Location::Location()
{
    //ctor
}


Location::Location(char *name, char *locat)
{
    strcpy(this->name, name);
    strcpy(this->locat, locat);
}

Location::~Location()
{
    //dtor
}

istream& operator >>(istream& in, Location& location)
{
    //cout << "Name: ";
    in >> location.name;

   // cout << "Price: ";
    in >> location.locat;

    return in;
}

ostream& operator <<(ostream& out, const Location& location)
{

    out << location.name << "|" << location.locat;


    return out;
}
