#ifndef SALES_H
#define SALES_H
#include <iostream>
#include "UI/Menu.h"
#include "Services/CreatePizza.h"
#include "Repositories/OrderRepository.h"



using namespace std;

class Sales
{
    public:
        Sales();
        void salesUI();
        void create_pizza();
        void read_order();
        vector<string> addTopping(vector<string>& toppings);
        getprice(char pizzaSize,vector<string> toppings);
        string Stores();
    private:
        OrderRepository repo;
};

#endif // SALES_H


/*string Sales::Stores()
{
    char input;
    string place;
    cout << "Pick a Store location." <<endl;
    cout << "1 - Highway Street 11" <<endl;
    cout << "2 - Lowway Street 12" <<endl;
    cout << "3 - Middleway Street 13" <<endl;
    cin >> input;
    switch(input)
    {
        case '1':
            place = "Highway Street 11";
            return place;
            break;
        case '2':
            place = "Lowway Street 12";
            return place;
            break;
        case '3':
            place = "Middleway Street 13";
            return place;
            break;
        default:
            cout << "Invaild input. try again" << endl;
            Stores();
            break;
    }
    return "";
}*/
