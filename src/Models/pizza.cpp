#include "Models/pizza.h"
using namespace std;
Pizza::Pizza()
{
    clean();
    toppingCount = 0;
    toppings = 0;
    currentToppingNum = 0;
}
Pizza::Pizza(int numberOfToppings)
{

    toppingCount = numberOfToppings;
    toppings = new Topping[toppingCount];
    currentToppingNum = 0;
}
Pizza::~Pizza()
{
    clean();

}
void Pizza::initialize(int numberOfToppings)
{
    clean();
    toppingCount = numberOfToppings;
    toppings = new Topping[toppingCount];
     currentToppingNum = 0;
}
void Pizza::addTopping(Topping topping)
{
    if( currentToppingNum < toppingCount)
    {
        toppings[currentToppingNum] = topping;
        currentToppingNum++;
    }
}
void Pizza::clean()
{
    if(toppings != 0)
    {
        delete[] toppings;
        toppingCount = 0;
        toppings = NULL;
        currentToppingNum = 0;
    }
}
istream& operator >>(istream& in, Pizza& pizza)
{
    int toppingCount = 0;
    in >> pizza.toppingCount;
    pizza.initialize(toppingCount);
    Topping topping;
    for(int i = 0; i < pizza.toppingCount; i++)
    {
        in >> topping;
//        pizza.addTopping(topping);
    }
    return in;
}

ostream& operator <<(ostream& out, const Pizza& pizza)
{
    out << pizza._id << "|";
    for(int i = 0; i < pizza.toppingCount; i++)
    {
        out << pizza.toppings[i] << endl;
    }
    return out;
}
