#include <iostream>
#include <fstream>

using namespace std;


#include "UI/pizzaui.h"
#include "Models/pizza.h"
#include "Repositories/pizzarespository.h"

#include "Services/newmenutopping.h"
#include "Repositories/newmenurespository.h"




PizzaUI::PizzaUI()
{
    //ctor
}


void PizzaUI::startUI()
{
    char selection = '\0';


        cout << "1: New pizza on menu" << endl;
        cout << "2: Make topping" << endl;
        cout << "3: Read toppings" << endl;
        cout << "4: New size" << endl;
        cin >> selection;


        if(selection == '1')
        {

          int topCnt;
          string name;
          int price;
    cout << "Name: ";
    cin >> name;

    cout << "how many toppings: ";
    cin >> topCnt;

    cout << "Price: ";
    cin >> price;
    NewMenuTopping menupizza(topCnt, name, price);

    for(int i = 0; i < topCnt; i++)
    {
        cout << "Topping " << i + 1 << ": ";
        MenuTopping topping;
        cin >> topping;
       menupizza.menuaddTopping(topping);

    }

    cout << menupizza;

        NewMenuRespository repoo;
        repoo.newMenu(menupizza);

cout << endl;
        }



        if(selection == '2')
        {
          int topCnt;
    cout << "How many toppings: ";
    cin >> topCnt;

    Pizza pizza(topCnt);

    for(int i = 0; i < topCnt; i++)
    {
        Topping topping;
        cin >> topping;
       pizza.addTopping(topping);

    }

    cout << pizza;
        PizzaRespository repo;
        repo.storePizza(pizza);

cout << endl;
        }
        if(selection == '3')
        {
           string str;
    ifstream fin;
    fin.open("toppings.txt");

    do
    {
        if(fin.is_open())
        {
            while(!fin.eof())
            {
                getline(fin,str);
                cout << str << endl;
            }
        }
        else
        {
            cout << "File note open" << endl;
        }
    }
    while (!fin.is_open());
    fin.close();

}        }




