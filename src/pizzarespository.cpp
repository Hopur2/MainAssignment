#include <fstream>

using namespace std;

#include "pizzarespository.h"
#include "pizza.h"
#include "pizzaui.h"
PizzaRespository::PizzaRespository()
{
    //ctor
}

PizzaRespository::~PizzaRespository()
{
    //dtor
}
void PizzaRespository::storePizza(const Pizza& pizza)
{
    ofstream fout;
    fout.open("toppings.txt", ios::app);

    fout << pizza;

    fout.close();
}
Pizza PizzaRespository::retrievePizza()
{
    ifstream fin;
    fin.open("toppings.txt");

    Pizza pizza;
    fin >> pizza;

    fin.close();

    return pizza;
}
