#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>

using namespace std;
class Topping
{
    public:
        Topping();
        Topping(char *name, int price);
        virtual ~Topping();

        friend istream& operator >>(istream& in, Topping& topping);

        friend ostream& operator <<(ostream& out, const Topping& topping);

    protected:
    private:
        char name[32];
        int price;

};

#endif // TOPPING_H
