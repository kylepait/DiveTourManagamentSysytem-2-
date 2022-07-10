#include "divers.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;




int Diver::readDivers(fstream &diverFile){




    /**
    If the any of the file cannot be opened then the program terminates displaying
    the error message
    **/
    if (!diverFile)
    {
        cout << "The Diver input file does not exist. Program terminates!" << endl;
        return 1;
    }


    ///Take in the information from the file
    char trash;

        diverFile >> name.firstName >> name.lastName
        >> dob.month >> trash >> dob.day >> trash >> dob.year
        >> emPhoneNum
        >> certLevel
        >> certAgency
        >> equipNeeded.wetsuit
        >> trash
        >> equipNeeded.regulator
        >> trash
        >> equipNeeded.o2tank;


    return 0;
}

void Diver::printDivers(){
    cout << "Divers--------------------------------------------------------------------\n";
    cout << "Name\t\t DOB \t Emergency Phone Cert Lvl   Cert Agency\t Equip Needed\n";

        cout << name.firstName << " " << name.lastName << "\t" << left << setw(2) <<
        dob.month << "/" << setw(2) << dob.day << "/" << setw(7) <<dob.year <<
        emPhoneNum <<  "\t" << setw(19) << certLevel <<certAgency <<  "\t" <<
        equipNeeded.wetsuit << ":" <<  equipNeeded.regulator << ":" << equipNeeded.o2tank << endl;


}

void Diver::printPhoneNumber(Name toPrint){

    bool found = false;

        if(toPrint.firstName == name.firstName && toPrint.lastName == name.lastName){
            cout << "Phone number: " << emPhoneNum << endl;
            found = true;
        }



}
