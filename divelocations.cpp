#include <iostream>
#include <fstream>
#include <iomanip>

#include "diveLocations.h"


int DiveLocation::readLocations(fstream &locationFile){


    /**
    If the any of the file cannot be opened then the program terminates displaying
    the error message
    **/
    if (!locationFile)
    {
        cout << "The Dive Location input file does not exist. Program terminates!" << endl;
        return 1;
    }


    ///Take in the information from the file
    char trash;

        locationFile >> name >> diveCoord.latitude >> trash >> diveCoord.longitutde
        >> visability;


    return 0;

}

void DiveLocation::printLocations(){
    cout << "Dive-Locations---------------------------------------------------------\n";
    cout << "Location\tCoordinates\tVisability\n";


        cout << setw(14) << name << "\t" << diveCoord.latitude << ":" << diveCoord.longitutde << "\t"
        << visability << endl;

}
