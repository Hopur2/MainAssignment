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

/*
void PizzaRespository::ReadFile()
{
    string line;
    ifstream fin;
    fin.open("menu.txt");
    if(fin.is_open())
    {
        while(!fin.eof())
        {
           getline(fin, line);
           FilterFile(line);
        }
    }
    else
    {
        cout << "File could not be opened" << endl;
    }
}


void PizzaRespository::FilterFile(string lineorder)
{
    string filter[3];
    int counter = 0;
    for(unsigned int i = 0; i < lineorder.size(); i++)
    {
        if(lineorder[i] == '|')
        {
            counter++;
        }
        else
        {
            filter[counter] += lineorder[i];
        }
    }
//    DeleteMenu deletemenu((filter[0]), (filter[1]), Convertoint(filter[2]));
//    _Orders.push_back(DeleteMenu);
}

vector<DeleteMenu> PizzaRespository::PassOrders() {
    return _Orders;
}





int PizzaRespository::Convertoint(string toconvert)
{
    stringstream ss;
    int temp = 0;
    ss << toconvert;
    ss >> temp;

    return temp;
}*/
