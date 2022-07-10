#ifndef EQUIPMENT_H_INCLUDED
#define EQUIPMENT_H_INCLUDE

///is this right?
#include "divers.h"

using namespace std;



/**
This structure is to store the dive equipment info
**/
struct Equipment {
   string equipType;
   string condition;
   Date datePurchased;

   ///Member function declaration
   int readEquips(fstream &equipFile);
   void printEquips();

   ///equipment constructor
   Equipment()
   {
       equipType = "";
       condition = "";

   }
};


#endif // EQUIPMENT_H_INCLUDED
