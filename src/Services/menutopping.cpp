#include <string.h>
#include <fstream>
#include "Services/menutopping.h"

MenuTopping::MenuTopping()
{
    //ctor
}

MenuTopping::~MenuTopping()
{
    //dtor
}



MenuTopping::MenuTopping(char *name)
{

    strcpy(this->name, name);

}


istream& operator >>(istream& in, MenuTopping& menutopping)
{
    //in >> menutopping.name;

    return in;
}

ostream& operator <<(ostream& out, const MenuTopping& menutopping)
{

  //  out << menutopping.name;

    return out;
}
