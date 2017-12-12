#ifndef NEWSTUFF_H
#define NEWSTUFF_H
#include <fstream>
#include "topping.h"


class NewStuff
{
   public:
        NewStuff();
        NewStuff(int numberOfStuff);
        virtual ~NewStuff();

        void initialize(int numberOfStuff);
        void clean();

        void addTopping(Topping topping);

        friend istream& operator >>(istream& in, NewStuff& pizza);

        friend ostream& operator <<(ostream& out, const NewStuff& pizza);

    protected:
    private:
        Topping *toppings;
        int stuffCount;
        int currentstuffNum;
};

#endif // NEWSTUFF_H
