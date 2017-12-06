#include "MakelineFileWorker.h"

MakelineFileWorker::MakelineFileWorker()
{
    //ctor
    ReadFile();
}

void MakelineFileWorker::ReadFile()
{
    string line;
    ifstream fin;
    fin.open("Orders.txt");
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

void MakelineFileWorker::FilterFile(string lineorder)
{
    string filter[9];
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
    Order order(Convertoint(filter[0]), Convertoint(filter[1]), filter[2], filter[3][0], filter[4], filter[5], Convertoint(filter[6]), filter[7], Convertoint(filter[8]));
    _Orders.push_back(order);
}

vector<Order> MakelineFileWorker::PassOrders() {
    return _Orders;
}

void MakelineFileWorker::WriteOrders(vector<Order> Orders, vector<Order> DoneOrders)
{
    ofstream fout;
    fout.open("Orders.txt");
    if(fout.is_open())
    {
        for(unsigned int i = 0; i < Orders.size(); i++)
        {
            Orders[i].SetVerbose(false);
            fout << Orders[i];
        }
        fout.close();
    }
    else
    {
        cout << "File couldn't be opened" << endl;
    }
    fout.open("DoneOrders.txt", ios::app);
    if(fout.is_open())
    {
        for(unsigned int i = 0; i < DoneOrders.size(); i++)
        {
            DoneOrders[i].SetVerbose(false);
            fout << DoneOrders[i];
        }
        fout.close();
    }
    else
    {
        cout << "File couldn't be opened" << endl;
    }
}

int MakelineFileWorker::Convertoint(string toconvert)
{
    stringstream ss;
    int temp = 0;
    ss << toconvert;
    ss >> temp;

    return temp;
}

