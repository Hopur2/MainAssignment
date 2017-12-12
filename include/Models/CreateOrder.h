#ifndef CREATEORDER_H
#define CREATEORDER_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class CreateOrder
{
    public:
        CreateOrder(vector<string> toppings, char pizzaSize,string comments,string ID,char delivery,string place,int price,string status,char paid);
        unsigned int size() const;
        string at(int i) const;
        int get_price();
        string get_id();

        friend ostream& operator <<(ostream& out, const CreateOrder& createpizza);

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
