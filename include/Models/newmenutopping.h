#ifndef NEWMENUTOPPING_H
#define NEWMENUTOPPING_H
#include <fstream>



#include <vector>


using namespace std;
class NewMenuTopping
{
    public:
        NewMenuTopping();
        NewMenuTopping(int id,  string name, vector<string> topping, int price);
        virtual ~NewMenuTopping();
        int getID();
        int getPrice();
        string getName();
        friend ostream& operator <<(ostream& out, const NewMenuTopping& pizza);
    protected:
    private:
        vector<string> _topping;
        int toppingCount;
        string _name;
        int _price;
        int _id;
};

#endif
