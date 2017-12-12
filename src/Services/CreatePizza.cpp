#include "Services/CreatePizza.h"
CreatePizza::CreatePizza()
{

}

void CreatePizza::add_pizza_to_order(const CreateOrder& order1)
{
    repo.storePizza(order1);
}

int CreatePizza::get_Order_Price(string id)
{
    repo.ReadFile();
    Orders = repo.PassRecords();
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
