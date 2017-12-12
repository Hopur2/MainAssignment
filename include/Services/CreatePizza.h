#ifndef CREATEPIZZA_H
#define CREATEPIZZA_H
//#include "Repositories/OrderRepository.h"
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class CreatePizza
{
    public:

        CreatePizza();
        CreatePizza(vector<string> toppings, char pizzaSize,string comments,int ID,char delivery,string place,int price,string status,char paid);
        //CreatePizza(int ID,int delivery, string place, char pizzaSize, vector<string> toppings,string comments,int price,string status,int paid);
        unsigned int size() const;
        string at(int i) const;
        int get_price();
        int get_id();
        int get_Order_Price(int id);

        friend ostream& operator <<(ostream& out, const CreatePizza& createpizza);

    private:
        vector<CreatePizza> Orders;
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

