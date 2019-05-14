/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (4/22/2019)
STATUS: Full program, complies and runs. All functions, including extra credit functions 5 and 6, work.
*/

#include "functions.h"

using namespace std;

int main() {
	int user_choice;
	ifstream infile;
	ofstream outfile;

	vector<Dealer> dealerVec;

	cout << "Welcome! What would you like to do?" << endl;
	do{
		printMenu();
		cin >> user_choice;

		//Adds output buffer to make it more readable.
		cout << endl;

		switch (user_choice){
			case 1:
				readDealersAndCarsFromFile(infile, dealerVec);
				//Adds output buffer to make it more readable.
				cout << endl;
				break;

			case 2:
				displayDealers(dealerVec);
				break;

			case 3:
				displayCarsFromDealer(dealerVec);
				break;

			case 4:
				addCarToDealer(dealerVec);
				//Adds output buffer to make it more readable.
				cout << endl;
				break;

			case 5:
				sortCarsFromDealer(dealerVec);
				break;

			case 6:
				writeDealersCarsToFile(outfile, dealerVec);
				//Adds output buffer to make it more readable.
				cout << endl;
				break;

			case 7:
				cout << "Thank you for visiting!\n" << endl;
				break;
			
			default:
				cout << "Illegal entry. Try again." << endl;
				break;
		}	

	}while (user_choice != 7);

	return 0;
}
