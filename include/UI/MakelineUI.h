#ifndef MAKELINEUI_H
#define MAKELINEUI_H
#include "Services\MakelineServices.h"

using namespace std;

class MakelineUI
{
    public:
        MakelineUI();
        void MainMenu();
    private:
        MakelineServices MS;
};

#endif // MAKELINEUI_H
