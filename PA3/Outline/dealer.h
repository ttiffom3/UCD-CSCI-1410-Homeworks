/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Outline, this file will initialize the class dealer and set all of the necessary local values and methods for each dealer.
*/

/*
Creates the dealer class with these local variables and public functions for each dealer created.
Dealer
    dealerName: string
    dealerNumber: int
    carArrayPtr: pointer to a Dynamic Car Array (Note: make sure this is set to nullptr)
    numberOfCars: int

    These are the public functions, which includes the constructor
    Dealer()
    Dealer(dName:string, dNumber:int) 
    setDealerName ( _dealerName:string): void
    setDealerNumber (_dealerNumber:int ): void
    setCarArrayPtr (_carArrayPtr: Car *): void  //(This is where you use the new)
    setNumberOfCars ( int _numberOfCars): void
    getDealerName ( ): string
    getDealerNumber ( ): int
    getCarArrayPtr ( ): Car *
    getNumberOfCars: int
    friend operator << (out: ostream &, Dealer: _dealer):ostream & //Print the Dealer Name and Number and Blank line for a specific dealer.

*/

/*
Creates the car class with these local variables and public functions for each car created.
Car
    VIN:string
    make:string
    model:string
    year:int
    price:double

    These are the public functions, which includes the constructor
    Car( )
    Car(vVIN:string, vMake:string, vModel:string, vYear:int, vPrice:double)
    getVIN( ):string
    getMake( ):string
    getModel( ):string
    getYear( ):int
    getPrice( ):double
    setVIN(_VIN:string):void
    setMake(_make:string):void
    setModel(_model:string):void
    setYear(_year:int):void
    setPrice(_price:double):void
    friend operator << (out: ostream &, Car: _car):ostream & //Print the VIN, Make, Model, Year, Price and Blank line for a specific car.

*/
