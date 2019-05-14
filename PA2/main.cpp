/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Torin May (3/14/2019)
STATUS: Fully functional and running with delete function working
*/

#include "Functions.h"

using namespace std;

int main() {
	srand(time(NULL));


	const int MAX_SIZE = 20;
	char userInput;
	int numResponses = 0;
	
	Magic8Response responses[MAX_SIZE];

	ifstream infile;
	cout << "Torin May\nStudent ID: 103342274\n" << endl;

    numResponses = ReadResponses(infile, responses, MAX_SIZE);

	do {
		DisplayAndSelectMenu();
		cin >> userInput;
   		userInput = tolower(userInput);

		switch (userInput)
		{
			case 'a':
				break;

			case 'b':
				PlayMagic8(responses, MAX_SIZE);
				break;

			case 'c':
				PrintResponsesAndCategories(responses, MAX_SIZE);
				break;

			case 'd':
				WriteResponsesToFile(responses, MAX_SIZE);
				break;

			case 'e':
				cout << "Goodbye!" << endl;
				break;

			case 'f':
				DeleteResponse(responses, MAX_SIZE);
				break;
		
			default:
				cout << "Please chose a valid menu option." << endl;
				break;
		}
		cout << endl;

	}while(userInput != 'e');

	return 0;
}
