#ifndef ADMINMAINUI_H
#define ADMINMAINUI_H


#include "Models/newmenutopping.h"
#include "Services/adminservices.h"

class adminmainUI
{
    public:
        adminmainUI();
        void CreateMenu();
        void CreateTopping();
        void readTopp();
        void readMenu();
        void startUI();
        void DeleteMenu();
        void NewLocat();
        void NewSides();
        void FailCheck(int check);
        void IsValid(const NewMenuTopping& newmenutopping);
    protected:
    private:
        int admno;
        vector<NewMenuTopping> menu;
        AdminServices services;
        NewMenuTopping add;
        NewMenuTopping newmenutopping;
};

#endif // PIZZAUI_H
