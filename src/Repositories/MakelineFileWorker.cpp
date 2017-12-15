#include "Repositories/MakelineFileWorker.h"

MakelineFileWorker::MakelineFileWorker()
{
    //ctor
}

void MakelineFileWorker::ReadFile(string file)
{
    _Orders.clear();
    string line;
    ifstream fin;
    fin.open(file.c_str());
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            getline(fin, line);
            if(line.size() == 0)
            {
                break;
            }
            FilterFile(line);
        }
        fin.close();
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

void MakelineFileWorker::WriteOrders(string file1, string file2, vector<Order> Orders, vector<Order> DoneOrders)
{
    ofstream fout;
    fout.open(file1.c_str());
    if(fout.is_open())
    {
        for(unsigned int i = 0; i < Orders.size(); i++)
        {
            Orders[i].SetVerbose(3);
            fout << Orders[i];
            Orders[i].SetVerbose(1);
        }
        fout.close();
    }
    fout.open(file2.c_str(), ios::app);
    if(fout.is_open())
    {
        for(unsigned int i = 0; i < DoneOrders.size(); i++)
        {
            DoneOrders[i].SetVerbose(3);
            fout << DoneOrders[i];
            DoneOrders[i].SetVerbose(1);
        }
        fout.close();
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

