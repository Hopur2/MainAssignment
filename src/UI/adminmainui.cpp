#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

#include "UI/adminmainui.h"
#include "Services/adminservices.h"
#include "UI/Menu.h"

adminmainUI::adminmainUI()
{
    //ctor
}

void adminmainUI::startUI()
{

char choice;
        cout << "=================== Welcome Admin ==================" << endl;
        cout << "[1]. New pizza on menu" << endl;
        cout << "[2]. Make topping" << endl;
        cout << "[3]. Read toppings" << endl;
        cout << "[4]. Read menu" << endl;
        cout << "[5]. Delete from menu" << endl;
        cout << "[6]. New location" << endl;
        cout << "[7]. New stuff" << endl;
        cout << "[8]. Go to main menu" << endl;
        cout << "====================================================" << endl;
    cin >> choice;
    switch(choice)
    {
        case '1':
            CreateMenu();
            startUI();
            break;
        case '2':
            CreateTopping();
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
            DeleteMenu();
            startUI();
            break;
        case '6':
            NewLocat();
            startUI();
            break;
        case '7':
            NewSides();
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


void adminmainUI::IsValid(const NewMenuTopping& newmenutopping)
{

}

void adminmainUI::NewLocat()
{
        int topCnt;
        cout << "=================== New Location ===================" << endl;
        cout << "How many new locations: ";
        cin >> topCnt;
        int id;
        string name;
        string place;
        for(int i = 0; i < topCnt; i++)
        {
            cout << "Id: ";
            cin >> id;
            FailCheck(id);
            cout << "Name: ";
            cin >> name;
            cout << "Place: ";
            cin >> place;
            Newlocation location(id,name,place);
            services.storeNewlocation(location);
        }
        cout << endl;
}

void adminmainUI::CreateMenu()
{
        int id;
        int topCnt;
        string name;
        int price;
        string input;
        vector<string> topping;
        cout << "===================== New Pizza ====================" << endl;
        cout << "Id: ";
        cin >> id;
        FailCheck(id);
        cout << "Name: ";
        cin >> name;
        cout << "how many toppings: ";
        cin >> topCnt;
        cout << "Price: ";
        cin >> price;
    for(int i = 0; i < topCnt; i++)
    {
        cout << "Topping " << i + 1 << ": ";
        cin >> input;
        topping.push_back(input);
    }
    NewMenuTopping menupizza(id, name, topping, price);
    cout << menupizza;
    services.AddMenu(menupizza);
    cout << endl;
}
void adminmainUI::DeleteMenu()
{
    string deleteline;
    cout << "=================== Delete Pizza ===================" << endl;
    cout << "Id: ";
    cin >> deleteline;
    PizzaRespository repo;
    cout << repo.FindInFile(deleteline) << endl;
    string line2 = repo.FindInFile(deleteline);
    string line;
    ifstream fin;
    fin.open("menu.txt");
    ofstream temp;
    temp.open("tempmenu.txt");
    while (getline(fin,line))
    {
        if (line != line2)
        {
            temp << line << endl;
        }
    }
    temp.close();
    fin.close();
    remove("menu.txt");
    rename("tempmenu.txt","menu.txt");
}
void adminmainUI::CreateTopping()
{
    int topCnt;
    cout << "===================== New Topping ==================" << endl;
    cout << "How many toppings: ";
    cin >> topCnt;
    int id;
    string name;
    int price;
    for(int i = 0; i < topCnt; i++)
    {
        cout << "Id: ";
        cin >> id;
        FailCheck(id);
        cout << "Name: ";
        cin >> name;
        cout << "Price: ";
        cin >> price;
        Topping topping(id,name,price);
        services.storeTopping(topping);
    }
    cout << endl;
}
void adminmainUI::NewSides()
{
    int topCnt;
    cout << "==================== New Sides =====================" << endl;
    cout << "How many new sides: ";
    cin >> topCnt;
    int id;
    string name;
    int price;
    for(int i = 0; i < topCnt; i++)
    {
        cout << "Id: ";
        cin >> id;
        FailCheck(id);
        cout << "Name: ";
        cin >> name;
        cout << "Price: ";
        cin >> price;
        Topping sides(id,name,price);
        services.storeNewSides(sides);
    }
    cout << endl;
}
void adminmainUI::readTopp()
{
    cout << "================== Toppings ========================" << endl;
    services.retrieveTopping();
}
void adminmainUI::readMenu()
{
    cout << "===================== Menu =========================" << endl;
    services.retrievePizza();
}


void adminmainUI::FailCheck(int check)
{
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(256,'\n');
        check = 0;
    }
}

