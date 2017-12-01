#include "MakeOrder.h"
#include "Menu.h"
#include "pizza.h"
#include "Sales.h"

MakeOrder::MakeOrder()
{
    //ctor
}

MakeOrder::~MakeOrder()
{
    //dtor
}

void MakeOrder::makeOrderUI(){
    Sales sales;
    cout << "Create Order" << endl;
    cout << "1. make pizza" << endl;
    cout << "2. Go To SalesUI" <<endl;
    cout << "3. Go To Main Menu" << endl;
    char choice;
    cin >> choice;
    switch(choice) {
        case '1':
            break;
        case '2':
            sales.salesUI();
            break;
        case '3':
        Menu();
            break;
        default:
            cout << "Invaild input. try again" << endl;

            break;
    }
}
