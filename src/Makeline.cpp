#include "Makeline.h"

Makeline::Makeline()
{
    //ctor
    Getorder();
    OrderSplitter();
    Seeorder();
}

void Makeline::Getorder()
{
    ifstream fin;
    fin.open("Orders.txt");
    if(fin.is_open())
    {
        getline(fin, _linereader);
    }
    else
    {
        cout << "File could not be opened";
    }
}

void Makeline::Seeorder()
{
    cout << "ID: " << Order[0] << "   ";
    cout << "Size: " << Order[3] << "   ";
    cout << "Toppings: " << Order[4] << "   ";
    cout << "Comments: " << Order[5] << "   ";
    cout << "Status: " << Order[7] << "   ";
}

void Makeline::OrderSplitter()
{
    int counter = 0;
    for(int i = 0; i < _linereader.size(); i++)
    {
        if(_linereader[i] == '|')
        {
            counter++;
        }
        else
        {
            Order[counter] += _linereader[i];
        }
    }
}
