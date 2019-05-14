/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Outline, this file will initialize and implement the functions which are then called and used in main.cpp
*/


/*
readDealersAndCarsFromFile
    This function will take in an infile and the vector located in main and input the values from the file into the vector.

displayDealers
    This function will take in the vector from main and then print out all of the dealers' names and numbers to the screen. 

displayCarsFromDealer
    This function will take in the vector and a dealer number from main.
    If the nuber is valid, which is checked for in main, then it will print out all the cars under the correct dealer to the screen using a for-loop

addCarToDealer
    This function will take in the vector and a dealer number from main.

    If the user has enterd a valid dealer number, which is determined from main, the function will then ask for a car input from the user.
    The function will then use dynamically allocated arrays from the class dealer and then input the new car while then updating the car array and adding
    one to the dealers car count.

sortCarsFromDealer
    This function will take in the vector and a dealer number from main.

    If the user has enterd a valid dealer number, which is determined from main, the function will then use dynamically allocated array to sort the car array in the requested
    dealer.

writeDealersCarsToFile
    This function will take in the vector and an outfile from main and print the dealers and their cars to the requested outfile.

printMenu
    This function just prints this menu to the screen.

    1.	Read Dealers and Cars from file
    2.	Display Dealers
    3.	Choose a Dealer Number, Display Cars
    4.	Choose a Dealer Number, Add Car
    5.	Choose a Dealer, Sort cars by VIN (EXTRA CREDIT)
    6.	Write Dealers and Cars to file (EXTRA CREDIT)
    7.	Exit

    Also prints "Please enter a number corresponding to the menu: "


*/