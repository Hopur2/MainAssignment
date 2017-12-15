#include "Models/newmenutopping.h"

using namespace std;

NewMenuTopping::NewMenuTopping()
{

}
NewMenuTopping::NewMenuTopping(int id,string name, vector<string> topping,int price)
{
    _topping = topping;
    _id = id;
    _name = name;
    _price = price;
}
NewMenuTopping::~NewMenuTopping()
{

}


ostream& operator <<(ostream& out, const NewMenuTopping& pizza)
{
    out << pizza._id << "|" << pizza._name << "|";
    for(unsigned int i = 0; i < pizza._topping.size();i++)
    {
        out << pizza._topping.at(i);
        if(i != pizza._topping.size() - 1)
        {
            out << ",";
        }
    }
    out << "|";
    out << pizza._price << "|" << endl;
    return out;
}

int NewMenuTopping::getID()
{
    return _id;
}

int NewMenuTopping::getPrice()
{
    return _price;
}

string NewMenuTopping::getName()
{
    return _name;
}


