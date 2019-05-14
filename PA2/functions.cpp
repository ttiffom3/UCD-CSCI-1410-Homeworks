/*
NAME: Torin May
CLASS: CSCI 1410
DESCRIPTION: Contains all functions needed for program, besides main.
STATUS: Running, fulling fleshed out functions.
*/

#include "Functions.h"

int ReadResponses(ifstream &infile, Magic8Response responses[], const int &max_size){
    string answer;
    string category;
    int count = 0;
    infile.open("magicIn.txt");
    while (!infile.eof()) {
        getline(infile, answer);
        getline(infile, category);

        responses[count].answer = answer;
        responses[count].category = category;

        count++;
    }

    infile.close();

    return count;
}

void PlayMagic8(Magic8Response responses[], const int& size) {
    string userQuestion;

    cout << "Enter a question: ";
    cin >> ws;
    getline(cin, userQuestion);

    int randint = rand() % size;

    cout << "\nMagic 8 Ball Says: " << responses[randint].answer << "." << endl;
}

void PrintResponsesAndCategories(Magic8Response responses[], const int& size) {
    string ansoutput;
    
    string arrtosort[size * 2];
    string categories[size];
    string answers[size];

    for(int i = 0; i < size; i++){
        categories[i] = responses[i].answer;
        answers[i] = responses[i].category;
    }

    sort(categories, categories + size);
    sort(answers, answers + size);

    cout << "Categories | Answers" << endl;
    cout << "-----------|--------------" << endl;
    for(int i = 1; i < size; i++){
        if(answers[i][0] == 'v'){
            ansoutput = answers[i] + "     ";
        }else {
            ansoutput = answers[i] + "  ";
        }
        cout << ansoutput << " | " << categories[i] << endl;
    }
}

void WriteResponsesToFile(Magic8Response responses[], const int& size) {
    ofstream outFile;
    outFile.open("inventory.txt");

    for(int i = 0; i < size; i++) {
        outFile << responses[i].answer << endl;
        outFile << responses[i].category << endl;
    }

    outFile.close();
}

void DeleteResponse(Magic8Response responses[], const int& size){
    for (int i = 0; i < size - 1; i++){
        responses[i].answer = responses[i+1].answer;
        responses[i].category = responses[i+1].category;
	}
}

void DisplayAndSelectMenu() {
    cout << "-----------------------------------------------------" << endl;
    cout << "a. Read responses from a file." << endl;
    cout << "b. Play Magic Eight Ball." << endl;
    cout << "c. Print out responses and categories alphabetically." << endl;
    cout << "d. Write responses to a file." << endl;
    cout << "e. Exit." << endl;
    cout << "f. Delete responses." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Please choose a menu option: ";
}
