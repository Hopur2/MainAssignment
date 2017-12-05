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
         PizzaUI pizzaui;
         pizzaui.startUI();
         //cin >> selection;
    }
}
