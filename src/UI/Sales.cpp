#include "UI/Sales.h"

Sales::Sales()
{

}

void Sales::salesUI()
{
    cout << "Welcome Sales persons" << endl;
    cout << "1. make order" << endl;
    cout << "2. read Order" << endl;
    cout << "3. Go To Main Menu" << endl;
    char choice;
    cin >> choice;
    switch(choice) {
        case '1':
            create_pizza();
            break;
        case '2':
            read_order();
            break;
        case '3':
            Menu();
            break;
        default:
            cout << "Invaild input. try again" << endl;
            salesUI();
            break;
    }
}

void Sales::create_pizza()
{
    CreatePizza pizza;
    pizza.makepizza(pizza);

    cout << pizza;
    OrderRepository repo;
    repo.storePizza(pizza);
    cout << endl;
}

void Sales::read_order()
{
    string str;
    ifstream fin;
    fin.open("Temp.txt");

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
