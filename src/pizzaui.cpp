#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

#include "pizzaui.h"
#include "pizza.h"
#include "pizzarespository.h"

PizzaUI::PizzaUI()
{
    //ctor
}


void PizzaUI::startUI()
{
    char selection = '\0';



        cout << "n: make pizza" << endl;
        cout << "r: read pizza" << endl;
        cin >> selection;
        if(selection == 'n')
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
        if(selection == 'r')
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

        }



}
