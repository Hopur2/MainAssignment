#include "Repositories/OrderRepository.h"

OrderRepository::OrderRepository()
{
    //ctor
}

OrderRepository::~OrderRepository()
{
    //dtor
}

void OrderRepository::storePizza(const CreatePizza& pizza)
{
    ofstream fout;
    fout.open("Temp.txt", ios::app);

    fout << pizza;
    fout << endl;
    fout.close();
}
