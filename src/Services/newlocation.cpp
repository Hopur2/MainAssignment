#include "Services/newlocation.h"

using namespace std;

Newlocation::Newlocation()
{
    clean();
    locCount = 0;
    locations = 0;
    currentNum = 0;
}

Newlocation::Newlocation(int id, int numberOfLocations)
{
    _id = id;
    locCount = numberOfLocations;
    locations = new Location[locCount];
    currentNum = 0;
}

Newlocation::~Newlocation()
{
    clean();

}

void Newlocation::initialize(int numberOfLocations)
{
    clean();
    locCount = numberOfLocations;
    locations = new Location[locCount];
     currentNum = 0;
}

void Newlocation::addLocation(Location location)
{
    if( currentNum < locCount)
    {
        locations[ currentNum] = location;
        currentNum++;
    }
}

void Newlocation::clean()
{
    if(locations != 0)
    {
        delete[] locations;
        locCount = 0;
        locations = NULL;
        currentNum = 0;
    }
}

istream& operator >>(istream& in, Newlocation& loc)
{
    int locCount = 0;
    in >> loc.locCount;
    loc.initialize(locCount);
    Location location;
    for(int i = 0; i < loc.locCount; i++)
    {
        in >> location;
        loc.addLocation(location);
    }
    return in;
}

ostream& operator <<(ostream& out, const Newlocation& loc)
{
    out << loc._id << "|";
    for(int i = 0; i < loc.locCount; i++)
    {
        out << loc.locations[i] << endl;
    }
    return out;
}
