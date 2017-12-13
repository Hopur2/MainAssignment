#ifndef MAKELINEUI_H
#define MAKELINEUI_H
#include "Services\MakelineServices.h"

using namespace std;

class MakelineUI
{
    public:
        MakelineUI();
        void PickStore();
        void MainMenu();
        void PrintDoneOrders();
        void PrintOrders();
        void DoneOrders(string input);
    private:
        MakelineServices MS;
        vector<Order> orders;
};

#endif // MAKELINEUI_H
