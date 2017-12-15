#include "Services/CreatePizza.h"
CreatePizza::CreatePizza()
{
    repo.ReadFile();
    orders = repo.PassRecords();

    pizza_repo.ReadMenu();
    menu = pizza_repo.PassMenu();


    pizza_repo.ReadMenu();
    menu = pizza_repo.PassMenu();

    pizza_repo.ReadTopping();
    toppingMenu = pizza_repo.PassTopping();


}

void CreatePizza::AddPizzaToOrder(const CreateOrder& order1)
{
    if(IsValidSize(order1) && IsValidPayment(order1) && IsValidPhoneNumber(order1))
    {
        repo.StorePizza(order1);
    }

}

void CreatePizza::ReadMenu()
{
    pizza_repo.retrievePizza();
}

void CreatePizza::ReadToppings()
{
    pizza_repo.retrieveTopping();
}

string CreatePizza::GetToppings(int id)
{
    string name;
    for(unsigned int i = 0; i < toppingMenu.size(); i++)
    {
        if(toppingMenu[i].getID() == id)
        {
            name = toppingMenu[i].getName();
        }
    }
    return name;
}

int CreatePizza:: GetToppingPrice(int id)
{
    int price = 0;
    for(unsigned int i = 0; i < toppingMenu.size(); i++)
    {
        if(toppingMenu[i].getID() == id)
        {
            price = toppingMenu[i].getPrice();
        }
    }
    return price;
}

string CreatePizza::GetMenuItem(int id)
{
    string name;
    for(unsigned int i = 0; i < menu.size(); i++)
    {
        if(toppingMenu[i].getID() == id)
        {
            name = menu[i].getName();
        }
    }
    return name;
}

int CreatePizza::GetMenuPrice(int id,char Size)
{
    int price = 0;
    for(unsigned int i = 0; i < menu.size(); i++)
    {
        if(menu[i].getID() == id)
        {
            price = menu[i].getPrice();
        }
    }
    if(Size == 'M' || Size == 'm')
    {
        price = price * 0.85;
    }
    else if(Size == 'S' || Size == 's')
    {
        price = price * 0.7;
    }
    return price;
}

bool CreatePizza::IsValidPhoneNumber(const CreateOrder& order)
{
    string id = order.GetId();
    int size = id.length();
    for(unsigned int i = 0; i < id.length(); i++)
    {
        if((size != 7) || (!isdigit(id[i])))
        {
            throw (InvalidOrderIdException());
        }
    }
    return true;
}

bool CreatePizza::IsValidSize(const CreateOrder& order)
{
    char pizzaSize = order.GetSize();
    if((pizzaSize != 'M') && (pizzaSize != 'm') && (pizzaSize != 'L') && (pizzaSize != 'l') && (pizzaSize != 'S') && (pizzaSize != 's'))
    {
        throw(InvalidPizzaSizeException());
    }
    return true;
}

bool CreatePizza::IsValidPayment(const CreateOrder& order)
{
    char paid = order.GetPaid();
    if(paid != 'y' && paid != 'n')
    {
        throw(InvalidPaidException());
    }
    return true;
}

int CreatePizza::ConvertToInt(string input)
{
    int newint = repo.Converttoint(input);
    return newint;
}
