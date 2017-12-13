#include "UI/Menu.h"

Menu::Menu()
{
    Sales sales;
    MakelineUI makeline;
    DeliveryUI delivery;
    while(true)
    {
        //ctor
        cout << "===================================================" << endl;
        cout << "Welcome to the *we need a name* Pizza shop" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "[1]. Admin" << endl;
        cout << "[2]. Makeline" << endl;
        cout << "[3]. Sales" << endl;
        cout << "[4]. Delivery" << endl;
        cout << "===================================================" << endl;
        cin >> _choice;
        switch(_choice) {
            case '1':
                adminmainUI();
                break;
            case '2':
                makeline.MainMenu();
                break;
            case '3':
                sales.salesUI();
                break;
            case '4':
                delivery.MainMenu();
                break;
            default:
                cout << "Try again" << endl;
                Menu();
                break;
    }
    }
}
