#include "newmenutopping.h"
#include <fstream>
#include <stddef.h>
using namespace std;
NewMenuTopping::NewMenuTopping()
{
    clean();
    toppingCount = 0;
    menutoppings = 0;
    currentToppingNum = 0;
}
NewMenuTopping::NewMenuTopping(int numberOfToppings,string name, int price)
{
    _name = name;
    _price = price;
    toppingCount = numberOfToppings;
    menutoppings = new MenuTopping[toppingCount];
     currentToppingNum = 0;
}
NewMenuTopping::~NewMenuTopping()
{
    clean();

}
void NewMenuTopping::initialize(int numberOfToppings)
{
    clean();
    toppingCount = numberOfToppings;
    menutoppings = new MenuTopping[toppingCount];
     currentToppingNum = 0;
}
void NewMenuTopping::menuaddTopping(MenuTopping menutopping)
{
    if( currentToppingNum < toppingCount)
    {
        menutoppings[ currentToppingNum] = menutopping;
        currentToppingNum++;
    }


}
void NewMenuTopping::clean()
{
    if(menutoppings != 0)
    {
        delete[] menutoppings;
        toppingCount = 0;
        menutoppings = NULL;
        currentToppingNum = 0;
    }

}
istream& operator >>(istream& in, NewMenuTopping& NewMenuTopping)
{
    int toppingCount = 0;
    in >> NewMenuTopping.toppingCount;
    NewMenuTopping.initialize(toppingCount);
    MenuTopping menutopping;
    for(int i = 0; i < NewMenuTopping.toppingCount; i++)
    {
        in >> menutopping;
        NewMenuTopping.menuaddTopping(menutopping);
          //  in >> pizza.toppings[i];
    }

    return in;
}

ostream& operator <<(ostream& out, const NewMenuTopping& pizza)
{
   // out << "Pizza with toppings: " << endl;
    out << pizza._name << " : ";

    for(int i = 0; i < pizza.toppingCount; i++)
    {
        out << pizza.menutoppings[i] << " ";
    }
    out << pizza._price << endl;


    return out;
}

