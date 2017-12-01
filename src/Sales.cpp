#include "Sales.h"
#include "Menu.h"
#include "pizzaui.h"
#include "MakeOrder.h"

Sales::Sales()
{
    salesUI();
}

void Sales::salesUI()
{
    MakeOrder order;

     cout << "Welcome Sales persons" << endl;
    cout << "1. make pizza" << endl;
    cout << "2. read Order" << endl;
    cout << "4. Go To Main Menu" << endl;
    cin >> _choice;
    switch(_choice) {
        case '1':
            order.makeOrderUI();
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            Menu();
            break;
        default:
            cout << "Invaild input. try again" << endl;
            salesUI();
            break;
    }
}
