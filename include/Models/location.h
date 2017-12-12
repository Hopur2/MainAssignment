#ifndef LOCATION_H
#define LOCATION_H


#include <iostream>

using namespace std;
class Location
{
   public:
        Location();
        Location(char *streetname, char *locat);
        virtual ~Location();

        friend istream& operator >>(istream& in, Location& location);
        friend ostream& operator <<(ostream& out, const Location& location);

    protected:
    private:
        char name[32];
        char locat[32];

};

#endif
