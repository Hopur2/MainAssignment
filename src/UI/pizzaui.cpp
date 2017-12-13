#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

#include "UI/pizzaui.h"
#include "Repositories/pizzarespository.h"
#include "UI/Menu.h"


PizzaUI::PizzaUI()
{
    //ctor
}

void PizzaUI::startUI()
{

char choice;
        cout << "1: New pizza on menu" << endl;
        cout << "2: Make topping" << endl;
        cout << "3: Read toppings" << endl;
        cout << "4: Read menu" << endl;
        cout << "5: Delete from menu" << endl;
        cout << "6: New location" << endl;
        cout << "7: New stuff" << endl;
        cout << "8: Go to main menu" << endl;
    cin >> choice;
    switch(choice)
    {
        case '1':
            create_menu();
            startUI();
            break;
        case '2':
            create_topping();
            startUI();
            break;
        case '3':
            readTopp();
            startUI();
            break;
            case '4':
             readMenu();
            startUI();
            break;
            case '5':
             delete_menu();
            startUI();
            break;
            case '6':
           New_location();
           startUI();
            break;
            case '7':
           New_Stuff();
           startUI();
            break;
            case '8':
           Menu();
            break;
        default:
            cout << "Invaild input. try again" << endl;

            break;
    }
}


void PizzaUI::New_location()
{
        int id;
        int topCnt;
        cout << "Id: ";
        cin >> id;
        cout << "How many new locations: ";
        cin >> topCnt;

        Newlocation loc(id, topCnt);

        for(int i = 0; i < topCnt; i++)
        {
            cout << "Streetname and place: ";
            Location location;
            cin >> location;
            loc.addLocation(location);
        }
        cout << loc;
        PizzaRespository repo;
        repo.NewLocation(loc);
        cout << endl;
}

void PizzaUI::create_menu()
{
        int id;
        int topCnt;
        string name;
        int price;

        cout << "Id: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;

        cout << "how many toppings: ";
        cin >> topCnt;

        cout << "Price: ";
        cin >> price;

    NewMenuTopping menupizza(id, topCnt, name, price);

    for(int i = 0; i < topCnt; i++)
    {
        cout << "Topping " << i + 1 << ": ";
        MenuTopping topping;
        cin >> topping;
       menupizza.menuaddTopping(topping);

    }

    cout << menupizza;

        PizzaRespository repo;
        repo.newMenu(menupizza);

cout << endl;
}

void PizzaUI::delete_menu()
{
    string deleteline;
                string line;

                ifstream fin;
                fin.open("menu.txt");
                ofstream temp;
                temp.open("tempmenu.txt");
                cout << "Type in pizza you want to remove: ";
                cin >> deleteline;

               while (getline(fin,line))
{

    if (line != deleteline)
    {
    temp << line << endl;
    }
}


                temp.close();
                fin.close();
                remove("menu.txt");
                rename("tempmenu.txt","menu.txt");
}
void PizzaUI::create_topping()
{
     int topCnt;
        cout << "How many toppings: ";
        cin >> topCnt;

        Pizza pizza(topCnt);

        for(int i = 0; i < topCnt; i++)
        {
            cout << "id, name and price: ";
            Topping topping;
            cin >> topping;
            pizza.addTopping(topping);
        }
        cout << pizza;
        PizzaRespository repo;
        repo.storeTopping(pizza);
        cout << endl;
}
void PizzaUI::New_Stuff()
{
     int topCnt;
        cout << "How many new stuff: ";
        cin >> topCnt;

        NewStuff newstuff(topCnt);

        for(int i = 0; i < topCnt; i++)
        {
            cout << "id, name and price: ";
            Topping topping;
            cin >> topping;
            newstuff.addTopping(topping);
        }
        cout << newstuff;
        PizzaRespository repo;
        repo.storeNewStuff(newstuff);
        cout << endl;
}
void PizzaUI::readTopp()
{
    PizzaRespository readToppings;
    readToppings.retrieveTopping();
}
void PizzaUI::readMenu()
{
    PizzaRespository readMenus;
    readMenus.retrievePizza();
}




