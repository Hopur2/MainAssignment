/*#ifndef DELETEMENU_H
#define DELETEMENU_H

#include <iostream>
#include <string>

using namespace std;

class DeleteMenu
{
    public:
        DeleteMenu(string name, string topping, int price, string status);
        void SetVerbose(bool b);
        void SetStatus(string s);
        friend ostream& operator << (ostream& out, const DeleteMenu& deletemenu);
    protected:
    private:
        string _name;
        string _topping;
        int _price;
        string _status;
        bool _verbose;
};

#endif // DELETEMENU_H
*/
