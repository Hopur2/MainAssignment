#ifndef NEWLOCATION_H
#define NEWLOCATION_H

#include "Models/location.h"

class Newlocation
{
     public:
        Newlocation();
        Newlocation(int id,int numberOfLocations);
        virtual ~Newlocation();

        void initialize(int numberOfLocations);
        void clean();
        void addLocation(Location location);

        friend istream& operator >>(istream& in, Newlocation& loc);
        friend ostream& operator <<(ostream& out, const Newlocation& loc);

    protected:
    private:
        Location *locations;
        int locCount;
        int currentNum;
        int _id;
};

#endif // NEWLOCATION_H
