#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <vector>
using namespace std;
class Topping
{
    public:
        Topping();
        Topping(int id, char name, int price);
        virtual ~Topping();




        friend istream& operator >>(istream& in, Topping& topping);

        friend ostream& operator <<(ostream& out, const Topping& topping);

    protected:
    private:
        int _id;
        char _name[32];
        int _price;

};

#endif // TOPPING_H
