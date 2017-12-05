#include "CreatePizza.h"
CreatePizza::CreatePizza()
{
    _pizzaSize = '\0';
    _comments = "";
    _ID = 2017;

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
    char input;
    do
    {
        cout << "h - ham | p - pepperoni | m - mushroom" <<endl;
        cin >> input;
        if(input == 'h'){
            pizza._toppings.push_back("ham");
        }
        else if(input == 'p'){
            pizza._toppings.push_back("pepperoni");
        }
        else if(input == 'm'){
            pizza._toppings.push_back("mushroom");
        }
        else if(input == 'q'){
            cout << "leaving" <<endl;
        }
        else{
            cout << "invalid input" <<endl;
        }
    }while(input != 'q');
}

/*
istream& operator >>(istream& in, CreatePizza& createpizza)
{
    //Topping topping;
    cout << "pick a size L - large, m - medium or s - small" << endl;
    in >> createpizza._pizzaSize;

    createpizza.addTopping(createpizza);

    return in;
}*/

void CreatePizza::makepizza(CreatePizza& pizza)
{
    cout << "enter numerical ID for order: ";
    cin >> pizza._ID;
    cout << "pick a size L - large, M - medium or S - small" << endl;
    cin >> pizza._pizzaSize;

    pizza.addTopping(pizza);
    cout << "Add a comment to the order: ";
    cin.ignore();
    getline(cin,pizza._comments);
}

ostream& operator <<(ostream& out, const CreatePizza& pizza)
{
    out << pizza._ID <<"|"/* << delivery <<"|" << location <<"|"*/;
    out << pizza._pizzaSize<< "|";


    for(unsigned int i = 0; i < pizza.size();i++)
    {
        out << pizza._toppings.at(i)<< ",";
    }
    out << "|";
    out << pizza._comments<< "|";
    //out <<  <<pizza._price <<"|"<< pizza._status<<"|"<<pizza._paid<<"|";
    out << endl;

    return out;
}
