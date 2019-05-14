/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Working and compiles. This file implements the functions within the classes Dealer and Car which are both initialized in dealer.h.
*/

#include "dealer.h"

using namespace std;

Dealer::Dealer() {
    dealerName = "";
    dealerNumber = -1;
    numberOfCars = 0;
    
}
Dealer::Dealer(string _name, int _number, int _numcars) {
    dealerName = _name;
    dealerNumber = _number;
    numberOfCars = _numcars; 
}

void Dealer::setCarArrayPtr(Car* ptr) {
    int numCars = getNumberOfCars();
    carArrayPtr = new Car[numCars];
}

Dealer::~Dealer() {}

Car::Car() {
    //This is so if the use does want to add a car to dealer but doesnt input anything, it defaults.
    VIN = -1;
    make = "";
    model = "";
    year = -1;
    price = -1.0; 
}

Car::Car(int _v, string _ma, string _mo, int _yr, double _pr) {
    VIN = _v;
    make = _ma;
    model = _mo;
    year = _yr;
    price = _pr;
}

ostream & operator << (ostream &out, Dealer dr){
    out << "Name: " << dr.dealerName << "\nNumber: " << dr.dealerNumber << endl;
    return out;
}

ostream& operator<<(ostream& os, const Car& car){
    os << "VIN: " << car.VIN << "\nMake: " << car.make << "\nModel: " << car.model << "\nYear: " << car.year << "\nPrice: " << car.price;
    return os;
}

Car::~Car(){}