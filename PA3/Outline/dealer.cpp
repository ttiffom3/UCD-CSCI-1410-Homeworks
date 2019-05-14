/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Outline, this file will implement all of the functions within the class dealer which is initialized in dealer.h
*/

/*
These are the functions that need to be implemented in the dealer class located in dealer.h.
The set functions are used when a new dealer is created and added to the dealer vector and the new dealer needs its information.
The get functions are used when a user is requesting information from an alredy created dealer object.

setDealerName ( _dealerName:string): void
    This function will take in a user input string that corresponds with the name
    This then sets the string variable dealerName to the string.

setDealerNumber (_dealerNumber:int ): void
    This function will take in a user input integer that corresponds with the dealerNumber
    This then sets the int variable dealerNumer to the integer.

setCarArrayPtr (_carArrayPtr: Car *): void  //(This is where you use the new)
    This function will take in the pointer to the car array located in each dealer class object.
    This function will use dynamically allocated arrays to add all the necessary cars to the carArray object in the dealer class.

setNumberOfCars ( int _numberOfCars): void
    This function will take in the number of cars that each dealer class object holds and sets the integer to the 
    integer variable numberOfCars in each dealer class object.

getDealerName ( ): string
    When called this function will return the string dealerName from the requested dealer class object.

getDealerNumber ( ): int
    When called this function will return the int dealerNumber from the requested dealer class object.

getCarArrayPtr ( ): Car *
    When called this function will return the array pointer carArrayPtr from the requested dealer class object.

getNumberOfCars: int
    When called this function will return the int numberOfCars from the requested dealer class object.

*/