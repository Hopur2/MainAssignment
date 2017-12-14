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
    repo.StorePizza(order1);
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

int CreatePizza::GetOrderPrice(string id)
{
    int total_price = 0;
    for(unsigned int i = 0; i < orders.size(); i++)
    {
        if(orders[i].GetId() == id)
        {
            total_price += orders[i].GetPrice();
        }
    }
    return total_price;

}



int CreatePizza::ConvertToInt(string input)
{
    int newint = repo.Converttoint(input);
    return newint;
}
