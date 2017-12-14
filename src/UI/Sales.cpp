#include "UI/Sales.h"

Sales::Sales()
{

}

void Sales::salesUI()
{
    cout << "============== Welcome Sales persons ==============" << endl;
    cout << "[1]. make order" << endl;
    cout << "[2]. read Order" << endl;
    cout << "[3]. Go To Main Menu" << endl;
    cout << "===================================================" << endl;
    char choice;
    cin >> choice;
    switch(choice)
    {
        case '1':
            create_pizza();
            salesUI();
            break;
        case '2':
            read_order();
            salesUI();
            break;
        case '3':
            Menu();
            break;
        default:
            cout << "Invaild input. try again" << endl;
            salesUI();
            break;
    }
}

void Sales::create_pizza()
{
    int total_price = 0;
    vector<string> toppings;
    char pizzaSize;
    string comments;
    string id;
    char delivery;
    string place;
    int price;
    int numberOfPizzas = 0;
    char paid;
    string status ="Preparation";
    cout << "================== Create Order ===================" <<endl;
    cout << "Enter phone Number for order: ";
    cin >> id;
    cout << "---------------------------------------------------" << endl;
    cout << "press 0 for delivery or 1 for retrieval: ";
    cin >> delivery;
    if(delivery == '1')
    {
        place = Stores();
    }
    else
    {
        cout << "Delivery address: ";
        cin.ignore();
        getline(cin,place);
    }
    cout << "---------------------------------------------------" << endl;
    cout << "press Y to pay now or N to pay during retrieval: ";
    cin >> paid;
    cout << "---------------------------------------------------" << endl;
    cout << "Add a comment to the order: ";
    cin.ignore();
    getline(cin,comments);
    cout << "---------------------------------------------------" << endl;
    cout << "how many pizzas: ";
    cin >> numberOfPizzas;


    for(int i = 0; i < numberOfPizzas; i++)
    {
        cout << "---------------------------------------------------" << endl;
        cout << "Order from menu press 'y'" <<endl;
        cout << "Or pick your own toppings press n" <<endl;
        cout << "Input: ";
        char OrderFromMenu;
        cin >> OrderFromMenu;
        cout << "---------------------------------------------------" << endl;
        if(OrderFromMenu == 'y')
        {
            cout << "pick a size L - large, M - medium or S - small" << endl;
            cin >> pizzaSize;
            GetFromMenu(toppings, price,pizzaSize);
        }
        else
        {
            cout << "pick a size L - large, M - medium or S - small" << endl;
            cin >> pizzaSize;

            addTopping(toppings,price);

            price += getprice(pizzaSize);
        }

        total_price += price;
        CreateOrder pizza(id,delivery,place,pizzaSize,toppings,comments,price,status,paid);
        cout << pizza << endl;

        order_service.add_pizza_to_order(pizza);
        toppings.clear();
    }
    cout << "---------------------------------------------------" << endl;
    cout << "Price of Order: " << total_price << endl;
    cout << "================== Create Order ===================" <<endl;
}

void Sales::addTopping(vector<string>& toppings,int& price)
{
    order_service.ReadToppings();
    int id;
    string input;
    bool leave = true;
    cout << "'q' to quit" <<endl;
    cout << "enter the id of topping: ";

    do
    {
        cin >> input;
        if(!isalpha(input[0]))
        {
            id = order_service.convert_to_int(input);
            toppings.push_back(order_service.get_toppings(id));
            price += order_service.get_topping_price(id);
        }
        else if(input == "q" || input == "Q")
        {
            leave = false;
        }
        else
        {
            cout << "wrong input" <<endl;
        }
    }while(leave == true);

}

void Sales::GetFromMenu(vector<string>& toppings, int& price,char Size)
{
    order_service.ReadMenu();
    int input;
    cout << "enter number to to add pizza: ";
    cin >> input;
    toppings.push_back(order_service.get_MenuItem(input));
    price = order_service.getMenuPrice(input,Size);
}

int Sales::getprice(char pizzaSize)
{
    int price = 0;
    if(pizzaSize == 'l' || pizzaSize == 'L')
    {
        price = 2000;
    }
    else if(pizzaSize == 'm' || pizzaSize == 'M')
    {
        price = 1700;
    }
    else
    {
        price = 1500;
    }
    return price;
}

string Sales::Stores()
{
    char input;
    string place;
    cout << "Pick a Store location." <<endl;
    cout << "1 - Highway Street 11" <<endl;
    cout << "2 - Lowway Street 12" <<endl;
    cout << "3 - Middleway Street 13" <<endl;
    cin >> input;
    switch(input)
    {
        case '1':
            place = "1";
            return place;
            break;
        case '2':
            place = "2";
            return place;
            break;
        case '3':
            place = "3";
            return place;
            break;
        default:
            cout << "Invaild input. try again" << endl;
            Stores();
            break;
    }
    return "";
}

void Sales::read_order()
{
    cout << "input phone number: ";
    string input;
    cin.ignore();
    getline(cin,input);

    order_service.get_Order_Price(input);
}
