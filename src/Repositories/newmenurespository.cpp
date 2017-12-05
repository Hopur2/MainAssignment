#include "Repositories/newmenurespository.h"
#include "Services/newmenutopping.h"
using namespace std;
NewMenuRespository::NewMenuRespository()
{
    //ctor
}

NewMenuRespository::~NewMenuRespository()
{
    //dtor
}

void NewMenuRespository::newMenu(const NewMenuTopping& newmenutopping)
 {
     ofstream fout;

    fout.open("menu.txt", ios::app);

    fout << newmenutopping;

    fout.close();
 }
