#include "Services/CreatePizza.h"
CreatePizza::CreatePizza()
{
    repo.ReadFile();
    Orders = repo.PassRecords();
}

void CreatePizza::add_pizza_to_order(const CreateOrder& order1)
{
    repo.storePizza(order1);
}

void CreatePizza::get_Order_Price(string id)
{
    int total_price = 0;
    for(unsigned int i = 0; i < Orders.size(); i++)
    {
        if(Orders[i].get_id() == id)
        {
            cout << id << " == " << Orders[i].get_id()<<endl;
            total_price += Orders[i].get_price();
        }
    }
    cout << total_price <<endl;
    //return total_price;

}
