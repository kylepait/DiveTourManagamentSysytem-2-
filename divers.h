#ifndef DIVERS_H_INCLUDED
#define DIVERS_H_INCLUDED

#include <string>

using namespace std;



/**
This structure is to store which equipment the diver will need provided
**/
struct EquipmentNeeded{
    char wetsuit;
    char regulator;
    char o2tank;

    ///EquipmentNeeded constructor

    EquipmentNeeded()
    {
        wetsuit = 'a';
        regulator = 'a';
        wetsuit = 'a';
    }

};


/**
This structure is to store name of the diver
**/
struct Name{
    string firstName;
    string lastName;


    ///Name constructor
    Name()
    {
        firstName = "";
        lastName = "";
    }

};

/**
This structure is to store the date and it has three integer fields
**/
struct Date{
	int day;
	int month;
	int year;


	///date constructor
	Date()
	{
	    day = 0;
	    month = 0;
	    year = 0;
	}
};



/**
This structure is to store the Diver info
**/
struct Diver{
    Name name;
    Date dob;
    long long int emPhoneNum;
    string certLevel;
    string certAgency;
    EquipmentNeeded equipNeeded;

    ///member function declaration

    void printPhoneNumber(Name toPrint);
    int readDivers(fstream &diverFile);
    void printDivers();

    ///Diver Constructor

    Diver()
    {

        emPhoneNum = 0;
        certLevel = "";
        certAgency = "";

    }




};

#endif // DIVERS_H_INCLUDED
