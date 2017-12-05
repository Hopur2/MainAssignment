#ifndef PIZZARESPOSITORY_H
#define PIZZARESPOSITORY_H

#include "Models/pizza.h"

class NewPizza
{
    public:
        NewPizza();
        virtual ~NewPizza();

        void storeNewPizza(const Pizza& pizza);
        Pizza retrievePizza();


    protected:
    private:
};

#endif // PIZZARESPOSITORY_H
