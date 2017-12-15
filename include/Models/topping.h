#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <vector>

using namespace std;
class Topping
{
    public:
        Topping();
        Topping(int id, string name, int price);
        virtual ~Topping();
        int getID();
        int getPrice();
        string getName();
        friend istream& operator >>(istream& in, Topping& topping);
        friend ostream& operator <<(ostream& out, const Topping& topping);
    protected:
    private:
        int _id;
        string _name;
        int _price;

};

#endif // TOPPING_H
