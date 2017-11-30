#ifndef MAKELINE_H
#define MAKELINE_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Makeline
{
    public:
        Makeline();
        void Getorder();
        void Seeorder();
        void OrderSplitter();

    protected:

    private:
        string _linereader;
        string Order[9];
};

#endif // MAKELINE_H
