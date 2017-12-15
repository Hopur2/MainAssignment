#include "Services/adminservices.h"

AdminServices::AdminServices()
{
    //ctor
}
AdminServices::~AdminServices()
{
    //dtor
}
void AdminServices::AddMenu(const NewMenuTopping& menu1)
{
    repo.newMenu(menu1);
}
void AdminServices::storeTopping(const Topping& pizza)
{
    repo.storeTopping(pizza);
}
void AdminServices::storeNewSides(const Topping& newsides)
{
    repo.storeNewSides(newsides);
}
void AdminServices::retrieveTopping()
{
    repo.retrieveTopping();
}
void AdminServices::retrievePizza()
{
    repo.retrievePizza();
}
void AdminServices::storeNewlocation(const Newlocation& location)
{
    repo.storeNewlocation(location);
}
void AdminServices::DeleteFromMenu(string line2)
{
    repo.DeleteFromMenu(line2);
}

