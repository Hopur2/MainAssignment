#include "UI/MakelineUI.h"
#include <stdlib.h>
MakelineUI::MakelineUI()
{
    //ctor
}

void MakelineUI::MainMenu()
{
    PickStore();
    string input;
    bool showdone = false;
    while(true) {
        system("cls");
        if(showdone)
        {
            cout << "=====================================================================================================" << endl;
            cout << "Showing Done Orders ---- press r to return and q to quit" << endl;
            cout << "-----------------------------------------------------------------------------------------------------" << endl;
            PrintDoneOrders();
            cout << "=====================================================================================================" << endl;
        }
        else
        {
            cout << "=====================================================================================================" << endl;
            cout << "Showing Orders to do ---- press r to show done orders and q to quit" << endl;
            cout << "-----------------------------------------------------------------------------------------------------" << endl;
            PrintOrders();
            cout << "=====================================================================================================" << endl;
        }
        cout << "What Order have you done?" << endl;
        cin >> input;
        if(input == "r")
        {
            showdone = !showdone;
        }
        else if(input == "q")
        {
            MS.Finished();
            cout << "Saved" << endl;
            break;
        }
        else
        {
            try
            {
                DoneOrders(input);
            }
            catch(string e)
            {
                cout << e << endl;
            }
        }
    }
}

void MakelineUI::PrintDoneOrders()
{
    orders = MS.PrintDoneOrders();
    for(unsigned int i = 0; i < orders.size(); i++)
    {
        cout << i << " " << orders[i];
    }
}

void MakelineUI::PrintOrders()
{
    orders = MS.PrintOrders();
    for(unsigned int i = 0; i < orders.size(); i++)
    {
        cout << i << " " << orders[i];
    }
}

void MakelineUI::DoneOrders(string input)
{
    int out = 0;
    stringstream ss;
    ss << input;
    ss >> out;

    MS.DoneOrder(orders[out]);
}

void MakelineUI::PickStore()
{
    string store;
    while(store != "1" && store != "2" && store != "3")
    {
        system("cls");
        cout << "===================================================" << endl;
        cout << "What store are you in?" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "[1] - Highway Street 11" << endl;
        cout << "[2] - Lowway Street 12" << endl;
        cout << "[3] - Middleway Street 13" << endl;
        cout << "===================================================" << endl;
        cin >> store;
    }
    MS.SetStore(store);
}
