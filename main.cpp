
#include <iostream>
#include <fstream>
#include <iomanip>

#include "divers.h"
#include "diveLocations.h"
#include "boats.h"
#include "equipment.h"


using namespace std;

Name getDiverName();
void sortByVol(Boat *&boats, int &arrSize);


int main()
{
    ///Create Null pointers and size to pass to READ functions
    Diver *divers = 0;
    int diversSize = 0;
    Boat *boats = 0;
    int boatsSize = 0;
    DiveLocation *diveLocations = 0;
    int diveLocationSize = 0;
    Equipment *equipment = 0;
    int equipmentSize = 0;

    int arrSize;

    ///Open the input files
    fstream diverFile("Divers.txt");
    fstream equipFile("Equipment.txt");
    fstream locationFile("DiveLocations.txt");
    fstream boatFile("Boats.txt");

    ///Get Size Of array and create the array
    diverFile >> diversSize;
    divers = new Diver[diversSize];

    ///Get Size Of array and create the array
    equipFile >> equipmentSize;
    equipment = new Equipment[equipmentSize];

    ///Get Size Of array and create the array
    locationFile >> diveLocationSize;
    diveLocations = new DiveLocation[diveLocationSize];

    ///Get Size Of array and create the array
    boatFile >> boatsSize;
    boats = new Boat[boatsSize];



    ///Call the read functions
    for (int i = 0; i < diversSize; i++)
        if(divers[i].readDivers(diverFile))
        return 1;
    for (int i = 0; i < boatsSize; i++)
        if(boats[i].readBoats(boatFile))
        return 1;
    for (int i = 0; i < diveLocationSize; i++)
        if(diveLocations[i].readLocations(locationFile))
        return 1;
    for (int i = 0; i < equipmentSize; i++)
        if(equipment[i].readEquips(equipFile))
        return 1;



    /**
    Display the prompt and do the requested action. Keep repeating the prompt until exit.
    If the number entered is not an option, just repeat the prompt.
    **/
    int chosenOption;
    Name toPrint;
    do{
        cout << "\n"
         << "1. Print all Divers \n"
         << "2. Print all Boats \n"
         << "3. Print all Dive Locations \n"
         << "4. Print all Equipment \n"
         << "5. Search for a Diver's emergency contact info \n"
         << "6. Exit \n"
         << "\n"
         << "Enter Option (1-5): ";
        cin >> chosenOption;
        /**
        Do the correct action according to the chosenOption
        **/
        switch(chosenOption)
        {
        case 1:
            for (int i = 0; i < diversSize; i++)
                divers[i].printDivers();
                break;
        case 2:
            sortByVol(boats, boatsSize);
            for (int i = 0; i < boatsSize; i++)
                boats[i].printBoats();
                break;
        case 3:
            for (int i = 0; i < diveLocationSize; i++)
                diveLocations[i].printLocations();
                break;
        case 4:
            for (int i = 0; i < equipmentSize; i++)
                equipment[i].printEquips();
                break;
        case 5:
            toPrint = getDiverName();
            for(int i = 0; i < diversSize; i++)
                divers[i].printPhoneNumber(toPrint);
                break;
        default:
            break;
        }

    }while(chosenOption != 6);

    return 0;
}


Name getDiverName(){
    Name nameToFind;
    cout << "\nWhat is the diver's Name? First Last: ";
    cin >> nameToFind.firstName >> nameToFind.lastName;

    return nameToFind;
}

void sortByVol(Boat *&boats, int &arrSize){

    for(int i = 0; i < arrSize; i++){

        for(int j = 0; j < arrSize; j++){

                if(boats[j].volCompare(boats[i])){

                    string temp = boats[i].name;
                    int height = boats[i].boatSize.height;
                    int width = boats[i].boatSize.width;
                    int length = boats[i].boatSize.length;
                    int personcap = boats[i].personCap;
                    int fuelCap = boats[i].fuelCap;

                    boats[i].name = boats[j].name;
                    boats[i].boatSize.height = boats[j].boatSize.height;
                    boats[i].boatSize.width = boats[j].boatSize.width;
                    boats[i].boatSize.length = boats[j].boatSize.length;
                    boats[i].personCap = boats[j].personCap;
                    boats[i].fuelCap = boats[j].fuelCap;

                    boats[j].name = temp;
                    boats[j].boatSize.height = height;
                    boats[j].boatSize.width = width;
                    boats[j].boatSize.length = length;
                    boats[j].personCap = personcap;
                    boats[j].fuelCap = fuelCap;

                }

        }
    }

}
