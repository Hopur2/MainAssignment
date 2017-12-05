#include "UI/Menu.h"
#include "Services/Makeline.h"
#include "UI/adminmainui.h"
#include "UI/Sales.h"
Menu::Menu()
{
    Sales sales;
    //ctor
    cout << "Welcome to the *we need a name* Pizza shop" << endl;
    cout << "1. Admin" << endl;
    cout << "2. Makeline" << endl;
    cout << "3. Sales" << endl;
    cout << "4. Delivery" << endl;
    cin >> _choice;
    switch(_choice) {
        case '1':
            adminmainUI();
            break;
        case '2':
            Makeline();
            break;
        case '3':
            sales.salesUI();
            break;
        case '4':
            break;
        default:
            cout << "Try again" << endl;
            Menu();
            break;
    }
}
