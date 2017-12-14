#include "UI/DeliveryUI.h"
#include <stdlib.h>
DeliveryUI::DeliveryUI()
{
    //ctor
}

void DeliveryUI::MainMenu()
{
    string ssn;
    system("cls");
    PickStore();
    cout << "Phone Number" << endl;
    cin >> ssn;
    PrintOrder(ssn);
    ManageOrder(ssn);
}

void DeliveryUI::PickStore()
{
    string store;
    while(store != "1" && store != "2" && store != "3")
    {
        cout << "===================================================" << endl;
        cout << "What store are you in?" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "[1] - Highway Street 11" << endl;
        cout << "[2] - Lowway Street 12" << endl;
        cout << "[3] - Middleway Street 13" << endl;
        cout << "===================================================" << endl;
        cin >> store;
    }
    DS.SetStore(store);
}

void DeliveryUI::PrintOrder(string ssn)
{
    int prize = 0;
    order = DS.FindOrder(ssn);
    system("cls");
    cout << "==============================================================================================" << endl;
    cout << "Order for phone number: " << ssn << endl;
    cout << "----------------------------------------------------------------------------------------------" << endl;
    for(unsigned int i = 0; i < order.size(); i++)
    {
        if(order[i].GetPayed() == 0)
        {
            prize += order[i].GetPrize();
        }
        order[i].SetVerbose(2);
        cout << order[i];
        order[i].SetVerbose(1);
    }
    cout << "----------------------------------------------------------------------------------------------" << endl;
    cout << "Total Prize: ";
    if(prize == 0)
    {
        cout << "PAYED" << endl;
    }
    else
    {
        cout << prize << endl;
    }
    cout << "==============================================================================================" << endl;
    cout << "What would you like to do" << endl;
    cout << "(p) - Payed, (d) - Delivered, (q) - Quit" << endl;
}

void DeliveryUI::ManageOrder(string ssn)
{
    char option;
    while(option != 'q')
    {
        cin >> option;
        switch(option)
        {
            case 'p':
                DS.OrderPayed(ssn);
                PrintOrder(ssn);
                break;
            case 'd':
                DS.OrderDelivered(ssn);
                PrintOrder(ssn);
                break;
            case 'q':
                cout << "You have chosen quit" << endl;
                break;
            default:
                cout << "You can't read" << endl;
                break;
        }
    }
}
