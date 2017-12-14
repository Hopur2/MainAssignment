#ifndef CREATEORDER_H
#define CREATEORDER_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class CreateOrder
{
    public:
        CreateOrder(string ID,char delivery,string place,char pizzaSize, vector<string> toppings, string comments,int price,string status,char paid);
        unsigned int size() const;
        string at(int i) const;
        int GetPrice();
        string GetId();

        friend ostream& operator <<(ostream& out, const CreateOrder& createOrder);

    private:
        vector<string> _toppings;
        char _pizzaSize;
        string _comments;
        string _ID;
        char _delivery;
        string _place;
        int _price;
        string _status;
        char _paid;
};

#endif // CREATEORDER_H
