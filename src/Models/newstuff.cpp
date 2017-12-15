#include "Models/newstuff.h"

NewStuff::NewStuff()
{
    clean();
    stuffCount = 0;
    toppings = 0;
    currentstuffNum = 0;
}
NewStuff::NewStuff(int numberOfStuff)
{
    stuffCount = numberOfStuff;
    toppings = new Topping[stuffCount];
    currentstuffNum = 0;
}
NewStuff::~NewStuff()
{
    clean();
}
void NewStuff::initialize(int numberOfStuff)
{
    clean();
    stuffCount = numberOfStuff;
    toppings = new Topping[stuffCount];
    currentstuffNum = 0;
}
void NewStuff::addTopping(Topping topping)
{
    if( currentstuffNum < stuffCount)
    {
        toppings[currentstuffNum] = topping;
        currentstuffNum++;
    }
}
void NewStuff::clean()
{
    if(toppings != 0)
    {
        delete[] toppings;
        stuffCount = 0;
        toppings = NULL;
        currentstuffNum = 0;
    }
}
istream& operator >>(istream& in, NewStuff& pizza)
{
    int stuffCount = 0;
    in >> pizza.stuffCount;
    pizza.initialize(stuffCount);
    Topping topping;
    for(int i = 0; i < pizza.stuffCount; i++)
    {
        in >> topping;
    }
    return in;
}

ostream& operator <<(ostream& out, const NewStuff& pizza)
{
    for(int i = 0; i < pizza.stuffCount; i++)
    {
        out << pizza.toppings[i] << endl;
    }
    return out;
}
