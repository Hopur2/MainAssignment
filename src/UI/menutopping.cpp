#include <string.h>
#include <fstream>
#include "UI/menutopping.h"

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
    //cout << "Name: ";
    in >> menutopping.name;




    return in;
}

ostream& operator <<(ostream& out, const MenuTopping& menutopping)
{

    out << menutopping.name;


    return out;
}
