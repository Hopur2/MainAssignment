#include "Repositories/MakelineFileWorker.h"

MakelineFileWorker::MakelineFileWorker()
{
    //ctor
}

void MakelineFileWorker::ReadFile(string file)
{
    string line;
    ifstream fin;
    //fin.open(thefile);
    fin.open("temp.txt");
    if(fin.is_open())
    {
        while(!fin.eof())
        {
           getline(fin, line);
           FilterFile(line);
        }
        fin.close();
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

void MakelineFileWorker::WriteOrders(string file1, string file2, vector<Order> Orders, vector<Order> DoneOrders)
{
    ofstream fout;
    //fout.open(file1);
    //fout.open("temp.txt");
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
//    fout.open(file2, ios::app);
    fout.open("temp.txt",ios::app);
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

