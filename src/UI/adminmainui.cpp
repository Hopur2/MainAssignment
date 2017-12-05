#include <iostream>
#include <fstream>


#include "UI/adminmainui.h"
#include "UI/pizzaui.h"

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
