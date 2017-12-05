#include "CreatePizza.h"
CreatePizza::CreatePizza()
{
    _pizzaSize = '\0';
    _comments = "";

}

unsigned int CreatePizza::size() const{
    return _toppings.size();
}

string CreatePizza::at(int i) const{
   return _toppings[i];
}

void CreatePizza::addTopping(CreatePizza& pizza)
{
    cout << "press q to stop adding toppings" << endl;
    char input;
    do{
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

void CreatePizza::makepizza(CreatePizza& pizza){

    cout << "pick a size L - large, m - medium or s - small" << endl;
    cin >> pizza._pizzaSize;

    pizza.addTopping(pizza);
    cout << "Add a comment to the order: ";

    getline(cin,pizza._comments);
}

ostream& operator <<(ostream& out, const CreatePizza& createpizza)
{
    //out << ID <<"|" << delivery <<"|" << location <<"|";
    out << createpizza._pizzaSize<< "|";


    for(unsigned int i = 0; i < createpizza.size();i++){
        out << createpizza._toppings.at(i)<< ",";
    }
    out << "|";
    out << endl;

    return out;
}
