/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Compiles and runs. This file implements all of the functions laid out in the main.cpp file.
*/

#ifndef PA3_FUNCTIONS_H
#define PA3_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "dealer.h"

using namespace std;

void printMenu() {
    cout << "1.	Read Dealers and Cars from file." << endl;
    cout << "2.	Display Dealers." << endl;
    cout << "3.	Choose a Dealer Number, Display Cars." << endl;
    cout << "4.	Choose a Dealer Number, Add Car." << endl;
    cout << "5.	Choose a Dealer, Sort cars by VIN." << endl;
    cout << "6.	Write Dealers and Cars to file." << endl;
    cout << "7.	Exit" << endl;

    cout << "Please enter a number corresponding to the menu: ";
}

void readDealersAndCarsFromFile(ifstream &infile, vector<Dealer> &dealerVec) {

    cout << "Reading...";
    int dealer_number, dealer_num_cars, car_year;
    double car_price;
    string dealer_name, car_make, car_model, car_vin;

    infile.open("in.txt");
    while (!infile.eof()) {
        int count = 0;
        
        Dealer dealer_in;
        
        getline(infile, dealer_name);
        //This is a protection against program thinking the blank line at the end of text files is a new dealer.
        if (dealer_name.empty()){
            break;
        }
        dealer_in.setDealerName(dealer_name);

        infile >> dealer_number;
        dealer_in.setDealerNumber(dealer_number);

        infile >> dealer_num_cars;
        dealer_in.setNumberOfCars(dealer_num_cars);

        //Creates a pointer carrarr of type "Car"
        Car* carrarr;
        //Sets the "CarArrayPtr" in the "Dealer" class to the dynamic pointer.
        //This function then dynamically creates an array of type "Car" and of size "number of cars".
        dealer_in.setCarArrayPtr(carrarr);

        carrarr = dealer_in.getCarArrayPtr();

        //Since the next input getter is "cin" the input needs to ignore the next "\0" to use "cin" after "getline"
        infile.ignore();
        while (count < dealer_in.getNumberOfCars()) {
            //Reads the VIN string from file in and set the car at index "count" VIN to the read vin.
            getline(infile, car_vin);
            carrarr[count].setVIN(car_vin);

            getline(infile, car_make);
            carrarr[count].setMake(car_make);

            getline(infile, car_model);
            carrarr[count].setModel(car_model);

            infile >> car_year;
            carrarr[count].setYear(car_year);
            
            infile >> car_price;
            carrarr[count].setPrice(car_price);
            
            infile.ignore();

            count++;
        }

        //Adds the new dealer, "dealer_in", to the overall vector of "Dealers".
        dealerVec.push_back(dealer_in);
    }

    infile.close();
    cout << "Done." << endl;
}

void displayDealers(vector<Dealer> &dealerVec){
    for (int i = 0; i < dealerVec.size(); i++){
        cout << dealerVec.at(i) << endl;
    }
}

void displayCarsFromDealer(vector<Dealer> &dealerVec) {
    int user_dealer_input, dealer_index;
    bool loop_bool = true;
    displayDealers(dealerVec);
    cout << "From the choices above. Enter the dealer number to see cars: ";
    //Checks user input against all the dealer numbers in the vector and sets "dealer_index" to the dealer found at the index.
    while(loop_bool) {
        
        cin >> user_dealer_input;

        for (int i = 0; i < dealerVec.size(); i++){
            if (user_dealer_input == dealerVec.at(i).getDealerNumber()) {
                dealer_index = i;
                loop_bool = false;
            }
        }
        if (loop_bool) { cout << "No dealer found with that number. Try again: "; }
    }
    
    Car* car_array = dealerVec.at(dealer_index).getCarArrayPtr();

    cout << "\n" << dealerVec.at(dealer_index).getDealerName() << "\n" << endl;
    for (int i = 0; i < dealerVec.at(dealer_index).getNumberOfCars(); i++){
        cout << car_array[i] << "\n" << endl;
    }
}

void addCarToDealer(vector<Dealer> &dealerVec) {
    int user_dealer_input, dealer_index;
    bool loop_bool = true;
    string new_vin, new_make, new_model;
    int new_year;
    double new_price;

    displayDealers(dealerVec);
    cout << "From the choices above. Enter the dealer number to add a new car: ";
    while(loop_bool) {
        
        cin >> user_dealer_input;

        for (int i = 0; i < dealerVec.size(); i++){
            if (user_dealer_input == dealerVec.at(i).getDealerNumber()) {
                dealer_index = i;
                loop_bool = false;
            }
        }
        if (loop_bool) { cout << "No dealer found with that number. Try again: "; }
    }

    Dealer curr_dealer = dealerVec.at(dealer_index);

    cin.ignore();
    cout << "Enter new car VIN: ";
    getline(cin, new_vin);
    
    cout << "Enter new car make: ";
    getline(cin, new_make);

    cout << "Enter new car model: ";
    getline(cin, new_model);

    cout << "Enter new car year: ";
    cin >> new_year;
    
    cout << "Enter new car price: ";
    cin >> new_price;

    cout << "\nAdding...";

    Car* car_array = curr_dealer.getCarArrayPtr();
    Car temp_cars[curr_dealer.getNumberOfCars()];

    //Populates the temporary array of cars with the existing cars in car_array. This is done so the memory can be freed up.
    for (int i = 0; i < curr_dealer.getNumberOfCars(); i++){
       temp_cars[i] = car_array[i];
    }
    //Frees memory from old array to make space for bigger new car array
    delete car_array;

    //Adds one to the number of cars in the dealers inventory in order to make room for new user car
    int temp_num_cars = curr_dealer.getNumberOfCars();
    curr_dealer.setNumberOfCars(temp_num_cars + 1);

    //Creates new Car object pointing to the array created in setCarArrayPtr.
    Car* new_car_arr;
    curr_dealer.setCarArrayPtr(new_car_arr);

    new_car_arr = curr_dealer.getCarArrayPtr();

    int new_car_ammount = curr_dealer.getNumberOfCars();
    
    // new_car_arr = car_array;
    for (int i = 0; i < curr_dealer.getNumberOfCars() - 1; i++){
        new_car_arr[i] = temp_cars[i];
    }
    
    new_car_arr[curr_dealer.getNumberOfCars() - 1].setVIN(new_vin);
    new_car_arr[curr_dealer.getNumberOfCars() - 1].setMake(new_make);
    new_car_arr[curr_dealer.getNumberOfCars() - 1].setModel(new_model);
    new_car_arr[curr_dealer.getNumberOfCars() - 1].setYear(new_year);
    new_car_arr[curr_dealer.getNumberOfCars() - 1].setPrice(new_price);

    dealerVec.at(dealer_index) = curr_dealer;

    cout << "Done." << endl;
}

void sortCarsFromDealer(vector<Dealer> &dealerVec) {
    int user_dealer_input, dealer_index;
    bool loop_bool = true;

    displayDealers(dealerVec);
    cout << "From the choices above. Enter the dealer number to add a new car: ";
    while(loop_bool) {
        
        cin >> user_dealer_input;

        for (int i = 0; i < dealerVec.size(); i++){
            if (user_dealer_input == dealerVec.at(i).getDealerNumber()) {
                dealer_index = i;
                loop_bool = false;
            }
        }
        if (loop_bool) { cout << "No dealer found with that number. Try again: "; }
    }
    //Adds output buffer to make it more readable.
    cout << endl;

    Car* car_array = dealerVec.at(dealer_index).getCarArrayPtr();

    int i, j;
    Car swap;
    int n = dealerVec.at(dealer_index).getNumberOfCars();

    //Using bubble sort
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (car_array[j].getVIN() > car_array[j+1].getVIN()){
                swap = car_array[j];
                car_array[j] = car_array[j+1];
                car_array[j+1] = swap;
            }
        }
    }

    for (int i = 0; i < dealerVec.at(dealer_index).getNumberOfCars(); i++){
        cout << car_array[i] << "\n" << endl;
    }
}

void writeDealersCarsToFile(ofstream &outfile, vector<Dealer> &dealerVec) {
    cout << "Outputting...";
    outfile.open("out.txt");

    //Creates instance of pointing to class Car called carout.
    Car* carout;

    for (int i = 0; i < dealerVec.size(); i++){
        //Sets carout pointer to the Car array inside of the current Dealer.
        carout = dealerVec.at(i).getCarArrayPtr();

        outfile << dealerVec.at(i).getDealerName() << endl;
        outfile << dealerVec.at(i).getDealerNumber() << endl;
        outfile << dealerVec.at(i).getNumberOfCars() << endl;
        for (int j = 0; j < dealerVec.at(i).getNumberOfCars(); j++){
            outfile << carout[j].getVIN() << endl;
            outfile << carout[j].getMake() << endl;
            outfile << carout[j].getModel() << endl;
            outfile << carout[j].getYear() << endl;
            outfile << carout[j].getPrice() << endl;
        }
        
    }
    delete carout;
    outfile.close();
    cout << "Done." << endl;
}

#endif //PA3_FUNCTIONS_H