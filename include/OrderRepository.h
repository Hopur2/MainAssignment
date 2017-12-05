#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include "CreatePizza.h"

class OrderRepository
{
    public:
        OrderRepository();
        virtual ~OrderRepository();
        void storePizza(const CreatePizza& pizza);

    protected:

    private:
};

#endif // ORDERREPOSITORY_H
