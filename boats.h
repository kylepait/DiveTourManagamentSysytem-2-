#ifndef BOATS_H_INCLUDED
#define BOATS_H_INCLUDED

using namespace std;



/**
This structure is to store the size of the boat and it has three int fields
**/
struct SizeOfBoat{
    int length;
    int	width;
    int height;

    ///sizeofboat constructor
    SizeOfBoat()
    {
    length = 0;
    width = 0;
    height = 0;
    }
};

/**
This structure is to store the Boat info
**/
struct Boat{
    string name;
    SizeOfBoat boatSize;
    int personCap;
    int fuelCap;

    ///Member function declarations
    int readBoats(fstream &boatFile);

    ///Member function to sort by volume
    bool volCompare(Boat otherBoat);

    void printBoats();



    ///boat constructor
    Boat()
    {
    name = "";
    personCap = 0;
    fuelCap = 0;
    }
};



#endif // BOATS_H_INCLUDED
