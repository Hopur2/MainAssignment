#ifndef MENUTOPPING_H
#define MENUTOPPING_H
#include <iostream>

using namespace std;
class MenuTopping
{
   public:
        MenuTopping();
        MenuTopping(char *name);
        virtual ~MenuTopping();

        friend istream& operator >>(istream& in, MenuTopping& menutopping);

        friend ostream& operator <<(ostream& out, const MenuTopping& menutopping);

    protected:
    private:
        char name[32];

};

#endif // MENUTOPPING_H


