#ifndef ADMINSERVICES_H
#define ADMINSERVICES_H

#include "Repositories/pizzarespository.h"

class AdminServices
{
    public:
        AdminServices();
        virtual ~AdminServices();
        void AddMenu(const NewMenuTopping& menu1);
        void storeTopping(const Topping& pizza);
        void storeNewSides(const Topping& sides);
        void storeNewlocation(const Newlocation& location);
        void retrieveTopping();
        void retrievePizza();
        void DeleteFromMenu(string line2);

    protected:
    private:
        PizzaRespository repo;
};

#endif // ADMINSERVICES_H
