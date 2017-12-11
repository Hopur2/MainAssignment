#include "Repositories/OrderRepository.h"

OrderRepository::OrderRepository()
{
    //ctor
}


void OrderRepository::storePizza(const CreatePizza& pizza)
{
    ofstream fout;
    fout.open("Temp.txt", ios::app);

    fout << pizza;
    fout << endl;
    fout.close();
}

void OrderRepository::FilterOrders(string line)
{
    string order[8];
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
    CreatePizza ord(toppings, order[1][0], order[2], Converttoint(order[3]), order[4][0],order[5],Converttoint(order[6]),order[7],order[8][0]);

    Orders.push_back(ord);
}

vector<CreatePizza> OrderRepository::PassRecords()
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

