#include "Services/CreatePizza.h"
CreatePizza::CreatePizza()
{
    _pizzaSize = '\0';
    _comments = "Null";
    _ID = 2017;
    _place = "Highway Street 13";
    _delivery = '1';
    _price = 2000;
    _status = "Preparation";
    _paid = 'n';

}

unsigned int CreatePizza::size() const
{
    return _toppings.size();
}

string CreatePizza::at(int i) const
{
   return _toppings[i];
}

void CreatePizza::addTopping(CreatePizza& pizza)
{
    cout << "press q to stop adding toppings" << endl;
    cout << "h - ham | p - pepperoni | m - mushroom" <<endl;
    char input;
    do
    {
        cin >> input;
        if(input == 'h')
        {
            pizza._toppings.push_back("ham");
        }
        else if(input == 'p')
        {
            pizza._toppings.push_back("pepperoni");
        }
        else if(input == 'm')
        {
            pizza._toppings.push_back("mushroom");
        }
        else if(input == 'q')
        {
            cout << "leaving" <<endl;
        }
        else
        {
            cout << "invalid input" <<endl;
        }
    }while(input != 'q');
}

void CreatePizza::Stores(CreatePizza& pizza)
{
    char input;
    cout << "Pick a Store location." <<endl;
    cout << "1 - Highway Street 11" <<endl;
    cout << "2 - Lowway Street 12" <<endl;
    cout << "3 - Middleway Street 13" <<endl;
    cin >> input;
    switch(input)
    {
        case '1':
            pizza._place = "Highway Street 11";
            break;
        case '2':
            pizza._place = "Lowway Street 12";
            break;
        case '3':
            pizza._place = "Middleway Street 13";
            break;
        default:
            cout << "Invaild input. try again" << endl;
            Stores(pizza);
            break;
    }
}

int CreatePizza::getprice(CreatePizza& pizza)
{
    int price = 0;
    if(pizza._pizzaSize == 'l' || pizza._pizzaSize == 'L')
    {
        price = 2000;
    }
    else if(pizza._pizzaSize == 'm' || pizza._pizzaSize == 'M')
    {
        price = 1700;
    }
    else
    {
        price = 1500;
    }
    price += (pizza.size() * 200);
    return price;
}

void CreatePizza::makepizza(CreatePizza& pizza)
{
    cout << "enter numerical ID for order: ";
    cin >> pizza._ID;

    cout << "press 0 for delivery or 1 for retrieval: ";
    cin >> pizza._delivery;
    if(pizza._delivery == '1')
    {
        pizza.Stores(pizza);
    }
    else
    {
        cout << "Delivery address: ";
        cin.ignore();
        getline(cin,pizza._place);
    }

    //for(int i = 0; i < )
    cout << "pick a size L - large, M - medium or S - small" << endl;
    cin >> pizza._pizzaSize;

    pizza.addTopping(pizza);
    cout << "Add a comment to the order: ";
    cin.ignore();
    getline(cin,pizza._comments);
    pizza._price = getprice(pizza);
    cout << "press Y to pay now or N to pay during retrieval: ";
    cin >> pizza._paid;
}

ostream& operator <<(ostream& out, const CreatePizza& pizza)
{
    out << pizza._ID <<"|" << pizza._delivery <<"|" << pizza._place <<"|";
    out << pizza._pizzaSize<< "|";


    for(unsigned int i = 0; i < pizza.size();i++)
    {
        out << pizza._toppings.at(i);
        if(i!= pizza.size()-1)
        {
            out << ",";
        }
    }
    out << "|";
    out << pizza._comments<< "|";
    out << pizza._price <<"|"<< pizza._status<<"|"<<pizza._paid<<"|";
    //out << endl;

    return out;
}
