#ifndef CREATEPIZZA_H
#define CREATEPIZZA_H

#include <fstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class CreatePizza
{
    public:

        CreatePizza();

        void addTopping(CreatePizza& pizza);
        unsigned int size() const;
        string at(int i) const;
        void makepizza(CreatePizza& pizza);
        void Stores(CreatePizza& pizza);
        int getprice(CreatePizza& pizza);

        //friend istream& operator >>(istream& in, CreatePizza& createpizza);

        friend ostream& operator <<(ostream& out, const CreatePizza& createpizza);

    private:
        vector<string> _toppings;
        char _pizzaSize;
        string _comments;
        int _ID;
        char _delivery;
        string _place;
        int _price;
        string _status;
        char _paid;

};

#endif // PIZZA_H

