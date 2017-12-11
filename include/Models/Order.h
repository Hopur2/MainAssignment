#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <string>

using namespace std;

class Order
{
    public:
        Order(int ID, int Deliver, string Location, char Size, string Toppings, string Comment, int Prize, string Status, int Payed);
        void SetVerbose(bool b);
        void SetStatus(string s);
        string GetLocation();
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
        bool _verbose;
};

#endif // ORDER_H
