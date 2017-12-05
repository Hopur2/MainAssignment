#ifndef NEWMENURESPOSITORY_H
#define NEWMENURESPOSITORY_H

#include "newmenutopping.h"

using namespace std;

class NewMenuRespository
{
    public:
        NewMenuRespository();
        virtual ~NewMenuRespository();

        void newMenu(const NewMenuTopping& newmenutopping);
    protected:
    private:
};

#endif // NEWMENURESPOSITORY_H
