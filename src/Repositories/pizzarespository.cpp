#include "Repositories/pizzarespository.h"
PizzaRespository::PizzaRespository()
{
    //ctor
}

PizzaRespository::~PizzaRespository()
{
    //dtor
}


void PizzaRespository::ReadLocation()
{
    string str;
    ifstream fin;
    fin.open("location.txt");

        if(fin.is_open())
        {
            while(!fin.eof())
            {
                getline(fin,str);
                FilterMenu(str);
            }
        }
    fin.close();
}
void PizzaRespository::FilterLocation(string line)
{
    string order[3];
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
    Newlocation ord(Converttoint(order[0]), order[1], order[3]);
    location.push_back(ord);

}

vector<Newlocation> PizzaRespository::PassLocation()
{
    return location;
}
void PizzaRespository::ReadMenu()
{
    string str;
    ifstream fin;
    fin.open("menu.txt");

        if(fin.is_open())
        {
            while(!fin.eof())
            {
                getline(fin,str);
                FilterMenu(str);
            }
        }
    fin.close();
}
void PizzaRespository::FilterMenu(string line)
{
    string order[4];
    vector<string> topping;
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
    topping.push_back(order[2]);
    NewMenuTopping ord(Converttoint(order[0]), order[1], topping, Converttoint(order[3]));
    menu.push_back(ord);
}
vector<NewMenuTopping> PizzaRespository::PassMenu()
{
    return menu;
}
int PizzaRespository::Converttoint(string input)
{
    stringstream ss;
    int out = 0;
    ss << input;
    ss >> out;
    return out;
}

void PizzaRespository::ReadTopping()
{
    string str;
    ifstream fin;
    fin.open("toppings.txt");

        if(fin.is_open())
        {
            while(!fin.eof())
            {
                getline(fin,str);
                FilterTopping(str);
            }
        }
    fin.close();
}
void PizzaRespository::FilterTopping(string line)
{
    string order[3];
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
    Topping ord(Converttoint(order[0]), order[1], Converttoint(order[2]));
    toppings.push_back(ord);
}
vector<Topping> PizzaRespository::PassTopping()
{
    return toppings;
}
void PizzaRespository::ReadSides()
{
    string str;
    ifstream fin;
    fin.open("sides.txt");

        if(fin.is_open())
        {
            while(!fin.eof())
            {
                getline(fin,str);
                FilterTopping(str);
            }
        }
    fin.close();
}
void PizzaRespository::FilterSides(string line)
{
    string order[3];
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
    Topping ord(Converttoint(order[0]), order[1], Converttoint(order[2]));
    toppings.push_back(ord);
}

void PizzaRespository::storeNewlocation(const Newlocation& location)
{
    ofstream fout;
    fout.open("location.txt", ios::app);
    fout << location;
    fout.close();
}
void PizzaRespository::storeNewSides(const Topping& sides)
{
    ofstream fout;
    fout.open("sides.txt", ios::app);
    fout << sides;
    fout.close();
}
void PizzaRespository::storeTopping(const Topping& pizza)
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
            }
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
            }
        }
    }
    while (!fin.is_open());
    fin.close();
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
            }
        }
    }
    while (!fin.is_open());
    fin.close();
  }
string PizzaRespository::FindInFile(string input)
{
    string line;
    ifstream fin;
    fin.open("menu.txt");
    if(fin.is_open())
    {
        while(getline(fin,line))
        {
            if(line.find(input + "|") !=string::npos)
            {
               return line;
            }
        }
        fin.close();
    }
    else
    {
        return "File Couldn't be opened";
    }
    return 0;
}
