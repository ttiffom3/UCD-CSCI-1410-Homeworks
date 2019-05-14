/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Works, initializes classes Dealer and Car.
*/

#ifndef PA3_DEALER_H
#define PA3_DEALER_H

#include <string>
#include <iostream>

using namespace std;

class Car{
    private:
        string VIN;
        string make;
        string model;
        int year;
        double price;

    public:
        //default constructor
        Car();
        //custom constructor
        Car(int, string, string, int, double);
        //setters
        void setVIN(string v) { VIN = v; }
        void setMake(string ma) { make = ma; }
        void setModel(string mo) { model = mo; }
        void setYear(int y) { year = y; }
        void setPrice(double p) { price = p; }
        //getters
        string getVIN() { return VIN; }
        string getMake() { return make; }
        string getModel() { return model; }
        int getYear() { return year; }
        double getPrice() { return price; }
        //<< override
        friend ostream& operator<<(ostream& os, const Car& car);
        //deconstructor
        ~Car();
};

class Dealer{
    private:
        string dealerName;
        int dealerNumber;
        Car* carArrayPtr = NULL;
        int numberOfCars;

    public:
        //default contstructor
        Dealer();
        //custom contstructor
        Dealer(string, int, int);
        //setters
        void setDealerName(string n) { dealerName = n; }
        void setDealerNumber(int num) { dealerNumber = num; }
        void setCarArrayPtr(Car* carPtr);
        void setNumberOfCars(int cars) { numberOfCars = cars; }
        //getters
        string getDealerName() { return dealerName; }
        int getDealerNumber() { return dealerNumber; }
        Car* getCarArrayPtr() { return carArrayPtr; }
        int getNumberOfCars() { return numberOfCars; }
        //<< override
        friend ostream & operator << (ostream &out, Dealer dr);
        //deconstructor
        ~Dealer();
};

#endif //PA3_DEALER_H
