#ifndef CREATEPIZZA_H
#define CREATEPIZZA_H
//#include "CreateOrder.h"
#include "Repositories/OrderRepository.h"
#include "Repositories/pizzarespository.h"
#include "Exceptions/InvalidPaidException.h"
#include "Exceptions/InvalidPizzaSizeException.h"
#include "Exceptions/InvalidOrderIdException.h"



class CreatePizza
{
    public:

        CreatePizza();
        int GetOrderPrice(string id);
        void AddPizzaToOrder(const CreateOrder& order1);
        string GetToppings(int id);
        int GetToppingPrice(int id);
        int GetMenuPrice(int id,char Size);
        string GetMenuItem(int id);
        void ReadMenu();
        void ReadToppings();
        int ConvertToInt(string input);
        bool IsValidPhoneNumber(const CreateOrder& order);
        bool IsValidSize(const CreateOrder& order);
        bool IsValidPayment(const CreateOrder& order);

    private:
        vector<CreateOrder> orders;
        vector<NewMenuTopping> menu;
        vector<Topping> toppingMenu;

        OrderRepository repo;
        PizzaRespository pizza_repo;

};

#endif // PIZZA_H

