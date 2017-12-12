/*#include "deletemenu.h"



DeleteMenu::DeleteMenu(string name, string topping, int price, string status)
{
    //ctor
    _name = name;
    _topping = topping;
    _price = price;
    _status = status;
    _verbose = true;
}

void DeleteMenu::SetVerbose(bool b)
{
    _verbose = b;
}

void DeleteMenu::SetStatus(string s)
{
    _status = s;
}

ostream& operator << (ostream& out, const DeleteMenu& deletemenu)
{
    if(deletemenu._verbose)
    {
        out << "name: " << deletemenu._name << " ";
        out << "topping: " << deletemenu._topping << " ";
        out << "price: " << deletemenu._price << " ";
    }
    else
    {
        out << deletemenu._name << "|";
        out << deletemenu._topping << "|";
        out << deletemenu._price << "|" << endl;
    }

    return out;
}
*/
