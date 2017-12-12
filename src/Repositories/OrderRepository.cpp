#include "Repositories/OrderRepository.h"

OrderRepository::OrderRepository()
{
    //ctor
}


void OrderRepository::storePizza(const CreateOrder& pizza)
{
    ofstream fout;
    fout.open("Orders.txt", ios::app);

    fout << pizza;
    fout << endl;
    fout.close();
}

void OrderRepository::ReadFile()
{
    string str;
    ifstream fin;
    fin.open("Orders.txt");

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


void OrderRepository::FilterOrders(string line)
{
    string order[9];
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
    toppings.push_back(order[4]);
    CreateOrder ord(order[0],order[1][0],order[2],order[3][0],toppings,order[5],Converttoint(order[6]),order[7],order[8][0]);
    Orders.push_back(ord);
}

vector<CreateOrder> OrderRepository::PassRecords()
{
    return Orders;
}

int OrderRepository::Converttoint(string input)
{
    stringstream ss;
    int out = 0;
    ss << input;
    ss >> out;

    return out;

}


string OrderRepository::Converttostring(int input)
{
    stringstream ss;
    ss << input;
    string str = ss.str();
    return str;
}

