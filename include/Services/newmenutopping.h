#ifndef NEWMENUTOPPING_H
#define NEWMENUTOPPING_H
#include <fstream>
#include "UI/menutopping.h"

using namespace std;
class NewMenuTopping
{
    public:
        NewMenuTopping();
        NewMenuTopping(int id, int numberOfToppings, string name,int price);
        virtual ~NewMenuTopping();
        int getID();
        void initialize(int numberOfToppings);
        void clean();

        void menuaddTopping(MenuTopping menutopping);

        friend istream& operator >>(istream& in, NewMenuTopping& pizza);

        friend ostream& operator <<(ostream& out, const NewMenuTopping& pizza);

    protected:
    private:
        MenuTopping *menutoppings;
        int toppingCount;
        string _name;
        int _price;
        int currentToppingNum;
        int _id;
};

#endif // PIZZA_H
