//TORIN MAY
//STUDENT ID: 103342274
//CSCI 1410-002

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void almostAlwaysNinetyNine() {
    int switchedNum, switchedAbsNum, result, num, absNum, onesPlace, tensPlace;
    
    // Loops through all numbers between 0 and 99 (inclusive)
    for (int i = 0; i < 100; ++i) {
        num = i;
        if (num < 10) {
            switchedNum = num * 10;
        } else{
            //Gets the tens place of the number by using interger division
            tensPlace = num / 10;
            //Get the ones place of the number by using interger division then using modulus
            onesPlace = (num % 10) * 10;
            //Addes the two separate numbers back together to get the switched number
            switchedNum = tensPlace + onesPlace;
        }

        cout << num << " reverses to: " << switchedNum << endl;
        
        //Takes absolute value of the difference between switchedNum and num
        absNum = abs(switchedNum - num);

        cout << "Absolute value of " << switchedNum << " - " << num << " = " << absNum << endl;

        //Switches the digits of the new absolute value of the above equation using the same algorithm as above
        if (absNum < 10) {
            switchedAbsNum = absNum * 10;
        } else {
            //Swap digits of absNum(i) and stores it in named variable switchedAbsNum
            tensPlace = absNum / 10;
            onesPlace = (absNum % 10) * 10;
            switchedAbsNum = tensPlace + onesPlace;
        }
        
        //Adds the absolute number (absNum) and the swtiched absolute number (switchedAbsNum)
        result = absNum + switchedAbsNum;
    
        cout << absNum << " reverses to: " << switchedAbsNum << endl;

        //Checks to see if the result is 99
        if (result == 99) {
            cout << "Congrats! " << absNum << " + " << switchedAbsNum << " = 99." << endl;
        }else {
            cout << "Something went wrong!" << endl;
        }

        cout << endl;
    }
}
void alwaysThree(int inputNum) {
    //takes in inputNum as an argument
    int num = inputNum;
 
    num = num * 2;
    cout << "Doubling number = " << num << endl;
    
    num = num + 9;
    cout << "Adding 9 = " << num << endl;
   
    num = num - 3;
    cout << "Subtracting 3 = " << num << endl;

    num = num / 2;
    cout << "Dividing by 2 = " << num << endl;

    num = num - inputNum;
    cout << "Subtracting original number = " << num << endl;

    if (num == 3) {
        cout << "Congrats! You arrived at 3." << endl;
    }else {
        cout << "Oops. Something went wrong." << endl;
    }

    cout << endl;
}

int main() {
    int userInput, inputNum;
    string filename = "in.txt";
    // Input file stream
    ifstream inFS;

    cout << "Torin May\nStudent ID: 103342274" << endl;
    do {
       
        cout << "1. Almost Always Ninety-Nine" << endl;
        cout << "2. Always Three" << endl;
        cout << "3. Exit" << endl;
        cout << "4. Always Three with input file" << endl;

        cout << "Select an option number: ";
        cin >> userInput;

        cout << "-----------------------------\n" << endl;

        //Handels all possible user inputs to the above question.
        switch (userInput)
        {
            case 1:
                //Runs the function almostAlwaysNinetyNine
                almostAlwaysNinetyNine();
                break;
                
            case 2:
                //Asks user to input a number in order to run the function alwaysThree
                cout << "Pick a number: ";
                cin >> inputNum;
                alwaysThree(inputNum);
                break;

            case 3:
                cout << "Goodbye!" << endl;
                cout << endl;
                break;

            case 4:
                // Opens the file in.text

                inFS.open(filename);
                // checkes if program was sucessfully able to open the file
                if (!inFS.is_open()) {
                    cout << "Could not open "  << filename << "." << endl;
                }else {
                    // loops until the End Of File (EOF)
                    while (!inFS.eof()) {
                        // Every read line is inputed into the int inputNum
                        inFS >> inputNum;
                        // Checks to make sure reading the file does not fail
                        if (!inFS.fail()) {
                            cout << "Original Number: " << inputNum << endl;
                            //Every number is then passed to alwaysThree as an argument
                            alwaysThree(inputNum);
                        }
                    }
                }
                //Closes the file
                inFS.close();
                break;
            
            default:
                cout << "Please select a valid option." << endl;
                break;
        }
        cout << "-----------------------------" << endl;
    }while(userInput != 3);

    return 0;
}