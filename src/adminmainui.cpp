#include <iostream>
#include <fstream>


#include "adminmainui.h"
#include "pizzaui.h"

using namespace std;

adminmainUI::adminmainUI()
{
    //ctor
    startUI();
}



void adminmainUI::startUI()
{
    char selection = '\0';


    while(selection != 'q')
    {
        cout << "p: make pizzas" << endl;
        cout << "w: write" << endl;
        cout << "r: read" << endl;
        cout << "q: quit" << endl;
        cin >> selection;
        if(selection == 'p')
        {
            PizzaUI pizzaui;
            pizzaui.startUI();
            cout << endl;

        }
        if(selection == 'w')
        {
            cout << endl;
        }
        else if(selection == 'r')
        {
            cout << endl;
        }
    }
}
