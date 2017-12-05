#include <fstream>

using namespace std;

#include "Repositories/newpizza.h"
#include "Models/pizza.h"
#include "UI/pizzaui.h"

/*NewPizza::NewPizza()
{
    //ctor
}

*/
void NewPizza::storeNewPizza(const Pizza& pizza)
{
    ofstream fout;

    fout.open("Pizzas.txt", ios::app);

    fout << pizza;

    fout.close();
}
Pizza NewPizza::retrievePizza()
{
    ifstream fin;
    fin.open("Pizzas.txt");

    Pizza pizza;
    fin >> pizza;

    fin.close();

    return pizza;
}
