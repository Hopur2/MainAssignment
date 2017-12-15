#ifndef NEWLOCATION_H
#define NEWLOCATION_H

#include <string>
#include <sstream>
using namespace std;
class Newlocation
{
        public:
        Newlocation();
        Newlocation(int id, string name, string place);
        int getID();
        int getPrice();
        string getName();
        friend istream& operator >>(istream& in, Newlocation& location);
        friend ostream& operator <<(ostream& out, const Newlocation& location);
    protected:
    private:
        int _id;
        string _name;
        string _place;

};

#endif // NEWLOCATION_H
