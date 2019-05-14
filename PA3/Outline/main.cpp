/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Outline, compiles but non working
*/

int main() {
    /*
    Creates the vector of the type class dealer
    This will be where all of the outside functions and code gets handled.
    
    while-do loop that asks the user for a menu input in integer form

        Checks to see if the input is an integer

        Prints the menu to the screen using a function printMenu which is located and implemented in functions.h.

        Asks user for an integer type input.

        Switch that uses the numbers of each menu item as the cases.

        Case 1:
            Runs the function readDealersAndCarsFromFile located and implemented in functions.h.
        Case 2:
            Runs the function displayDealers located and implemented in functions.h.
        Case 3:
            This case will contain a do-while loop and take an input from the user in the form of an integer linking to the dealer number.
            If the number is valid, the it runs the function displayCarsFromDealer located and implemented in fuctions.h.
            If the number is invalid then the while loop prints out the option to exit if the user enters the number -1 else it prints out an invalid number message to the screen
            and then prints the input question again, until the number is valid or the user enters -1
        Case 4:
            This case will contain a do-while loop and take an input from the user in the form of an integer linking to the dealer number.
            If the number is valid, the it runs the function addCarToDealer located and implemented in fuctions.h.
            If the number is invalid then the while loop prints out the option to exit if the user enters the number -1 else it prints out an invalid number message to the screen
            and then prints the input question again, until the number is valid or the user -1
        Case 5:
            This case will contain a do-while loop and take an input from the user in the form of an integer linking to the dealer number.
            If the number is valid, the it runs the function sortCarsFromDealer located and implemented in fuctions.h.
            If the number is invalid then the while loop prints out the option to exit if the user enters the number -1 else it prints out an invalid number message to the screen
            and then prints the input question again, until the number is valid or the user enters -1
        Case 6:
            Runs the function writeDealersCarsToFile located and implemented in functions.h.
        Case 7:
            Exits from the do-while loop which will also end the program.
        Default case:
            prints "Invalid input to the screen and starts the while loop over again."

    do this loop until the exit number is inputed, in this case its 7.

    print out a friendly exit message to the screen.
    */
    return 0;
}
