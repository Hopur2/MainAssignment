#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <string>

using namespace std;

class Order
{
    public:
        Order(int ID, int Deliver, string Location, char Size, string Toppings, string Comment, int Prize, string Status, int Payed);
        int GetID();
        int GetPrize();
        int GetPayed();
        string GetToppings();
        string GetLocation();
        void SetVerbose(int b);
        void SetStatus(string s);
        void SetPayed(int p);
        friend ostream& operator << (ostream& out, const Order& order);
    private:
        int _ID;
        int _deliver;
        string _location;
        char _size;
        string _toppings;
        string _comment;
        int _prize;
        string _status;
        int _payed;
        int _verbose;
};

#endif // ORDER_H
