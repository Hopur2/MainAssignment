#include <fstream>

using namespace std;

#include "Repositories/pizzarespository.h"
#include "Models/pizza.h"

PizzaRespository::PizzaRespository()
{
    //ctor
}

PizzaRespository::~PizzaRespository()
{
    //dtor
}


void PizzaRespository::ReadFile()
{
    string str;
    ifstream fin;
    fin.open("menu.txt");

        if(fin.is_open())
        {
            while(!fin.eof())
            {
                getline(fin,str);
                FilterOrders(str);
            }
        }
        else
        {
            cout << "File note open" << endl;
        }
    fin.close();
}

void PizzaRespository::FilterOrders(string line)
{
    string order[4];
    vector<string> toppings;

    int counter = 0;
    for(unsigned int i = 0; i < line.size(); i++)
    {
        if(line[i] == '|')
        {
            counter++;
        }
        else
        {
            order[counter] += line[i];
        }
    }
    toppings.push_back(order[0]);
    //Topping ord(toppings, order[1][0], Converttoint(order[2]), Converttoint(order[3]), Converttoint(order[4]));
    NewMenuTopping ord(Converttoint(order[0]), Converttoint(order[1]), order[2], Converttoint(order[3]));

    menus.push_back(ord);
}

vector<NewMenuTopping> PizzaRespository::PassRecords()
{
    return menus;
}

int PizzaRespository::Converttoint(string input)
{
    stringstream ss;
    int out = 0;
    ss << input;
    ss >> out;

    return out;

}



void PizzaRespository::FilterTopping(string line)
{
    string order[3];
    vector<string> toppingss;

    int counter = 0;
    for(unsigned int i = 0; i < line.size(); i++)
    {
        if(line[i] == '|')
        {
            counter++;
        }
        else
        {
            order[counter] += line[i];
        }
    }
    toppingss.push_back(order[0]);
    //Topping ord(toppings, order[1][0], Converttoint(order[2]), Converttoint(order[3]), Converttoint(order[4]));
    Topping ord(Converttoint(order[0]), order[1], Converttoint(order[2]));

    toppings.push_back(ord);
}

vector<Topping> PizzaRespository::PassTopping()
{
    return toppings;
}












void PizzaRespository::storeNewStuff(const NewStuff& newstuff)
{
    ofstream fout;

    fout.open("stuff.txt", ios::app);

    fout << newstuff;

    fout.close();
}
void PizzaRespository::storeTopping(const Pizza& pizza)
{
    ofstream fout;

    fout.open("toppings.txt", ios::app);

    fout << pizza;

    fout.close();
}
void PizzaRespository::retrieveTopping()
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
void PizzaRespository::newMenu(const NewMenuTopping& newmenutopping)
 {

     ofstream fout;

    fout.open("menu.txt", ios::app);

    fout << newmenutopping;

    fout.close();
 }

  void PizzaRespository::retrievePizza()
  {
      string str;
    ifstream fin;
    fin.open("menu.txt");

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

void PizzaRespository::NewLocation(const Newlocation& location)
 {

     ofstream fout;

    fout.open("location.txt", ios::app);

    fout << location;

    fout.close();
 }

void PizzaRespository::GetLocation()
  {
      string str;
    ifstream fin;
    fin.open("location.txt");

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







