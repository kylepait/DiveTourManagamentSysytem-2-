#include <iostream>
#include <fstream>
#include <iomanip>

#include "equipment.h"

int Equipment::readEquips(fstream &equipFile){


    /**
    If the any of the file cannot be opened then the program terminates displaying
    the error message
    **/
    if (!equipFile)
    {
        cout << "The Equipment input file does not exist. Program terminates!" << endl;
        return 1;
    }


    ///Take in the information from the file
    char trash;

        equipFile >> equipType >> condition
        >> datePurchased.month >> trash >> datePurchased.day >> trash >> datePurchased.year;



    return 0;

}


void Equipment::printEquips(){
    cout << "Equipment----------------------------------------------------------------\n";
    cout << setw(11) << "Type" << setw(10) << "Condition" << "\t\tDate\n";

        cout << setw(11) << equipType << "\t" << setw(10) << condition << "\t"
        << datePurchased.month << "/" << datePurchased.day << "/" << datePurchased.year << endl;


}
