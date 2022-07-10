#include <iostream>
#include <fstream>
#include <iomanip>

#include "boats.h"


int Boat::readBoats(fstream &boatFile){



    /**
    If the any of the file cannot be opened then the program terminates displaying
    the error message
    **/
    if (!boatFile)
    {
        cout << "The Boat input file does not exist. Program terminates!" << endl;
        return 1;
    }




    ///Take in the information from the file
    char trash;

        boatFile >> name >> boatSize.height >> trash >> boatSize.width >> trash >> boatSize.length
        >> personCap >> fuelCap;


    return 0;
}

bool Boat::volCompare(Boat otherBoat){


    return (otherBoat.boatSize.height * otherBoat.boatSize.width * otherBoat.boatSize.length < boatSize.height * boatSize.width * boatSize.length);

}

void Boat::printBoats(){
    cout << "Boats--------------------------------------------------------------------\n";
    cout << "Boat Name\tLocation     Person Cap Fuel Cap\n";



            cout << left <<setw(15) << name << "\t" << setw(2) <<boatSize.height << ":" << setw(2) <<boatSize.width << ":" << setw(2) <<boatSize.length
            << "\t" << personCap << "\t" << fuelCap << endl;

}


