#ifndef PIZZARESPOSITORY_H
#define PIZZARESPOSITORY_H

#include "Models/pizza.h"
class PizzaRespository
{
    public:
        PizzaRespository();
        virtual ~PizzaRespository();

        void storePizza(const Pizza& pizza);

        Pizza retrievePizza();


    protected:
    private:
};

#endif // PIZZARESPOSITORY_H
