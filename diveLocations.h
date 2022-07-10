#ifndef DIVELOCATIONS_H_INCLUDED
#define DIVELOCATIONS_H_INCLUDED

using namespace std;


/**
This structure is to store location coordinates
**/
struct Coordinate{
    double latitude;
    double longitutde;


    ///coordinate constructor
    Coordinate()
    {
        latitude = 0;
        longitutde = 0;
    }
};



/**
This structure is to store the Dive Location info
**/
struct DiveLocation{
    string name;
    Coordinate diveCoord;
    int visability;

    ///Member function declaration
    int readLocations(fstream &locationFile);
    void printLocations();


    ///divelocation constructor
    DiveLocation()
    {
    name = "";
    visability = 0;
    }
};


#endif // DIVELOCATIONS_H_INCLUDED
