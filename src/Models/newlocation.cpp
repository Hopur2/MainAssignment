#include "Models/newlocation.h"

using namespace std;

Newlocation::Newlocation()
{

}



Newlocation::Newlocation(int id, string name, string place)
{
    _id = id;
    _name = name;
    _place = place;
}


istream& operator >>(istream& in, Newlocation& location)
{
    in >> location._id;
    in >> location._name;
    in >> location._place;
    return in;
}
ostream& operator <<(ostream& out, const Newlocation& location)
{
    out << location._id << "|" << location._name << "|" << location._place << "|" << endl;
    return out;
}
