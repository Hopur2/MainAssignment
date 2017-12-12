#include "Repositories/MakelineFileWorker.h"

MakelineFileWorker::MakelineFileWorker()
{
    //ctor
}

void MakelineFileWorker::ReadFile(string thefile)
{
    string line;
    ifstream fin;
<<<<<<< HEAD
=======
    //fin.open(file);
>>>>>>> 278e1e283f0a2edb24049bb30ba9622e96e9bf00
    fin.open("Orders.txt");
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
<<<<<<< HEAD
=======
    //fout.open(file1);
>>>>>>> 278e1e283f0a2edb24049bb30ba9622e96e9bf00
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
<<<<<<< HEAD
    fout.open("DoneOrders.txt", ios::app);
=======
    //fout.open(file2, ios::app);
    fout.open("Orders.txt",ios::app);
>>>>>>> 278e1e283f0a2edb24049bb30ba9622e96e9bf00
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

