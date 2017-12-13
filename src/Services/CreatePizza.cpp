#include "Services/CreatePizza.h"
CreatePizza::CreatePizza()
{
    repo.ReadFile();
    Orders = repo.PassRecords();
    pizza_repo.ReadMenu();
    menu = pizza_repo.PassMenu();
    //pizza_repo.ReadFile();
    //menu = pizza_repo.PassRecords();
}

void CreatePizza::add_pizza_to_order(const CreateOrder& order1)
{
    repo.storePizza(order1);
}

void CreatePizza::ReadMenu()
{
    pizza_repo.retrievePizza();
}

string CreatePizza:: get_toppings(int id)
{
    string name;
    for(unsigned int i = 0; i < menu.size(); i++)
    {
        if(menu[i].getID() == id)
        {
            name = menu[i].getName();
        }
    }
    return name;
}

int CreatePizza::getMenuPrice(int id,char Size)
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

int CreatePizza::get_Order_Price(string id)
{
    int total_price = 0;
    for(unsigned int i = 0; i < Orders.size(); i++)
    {
        if(Orders[i].get_id() == id)
        {
            total_price += Orders[i].get_price();
        }
    }
    return total_price;

}
