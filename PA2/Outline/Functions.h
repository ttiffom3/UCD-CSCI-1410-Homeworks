/*NAME: Torin May
CLASS: CSCI 1410 
DESCRIPTION: Created by Henok on 3/5/2019
STATUS: Doesn't do anything. Just an outline
*/


#include <iostream>
#include <fstream>

#ifndef PA2_FUNCTIONS_H
#define PA2_FUNCTIONS_H

using namespace std;

struct Magic8Response
{
    string answer;
    string category;
};

//Requirement A
int ReadResponses(ifstream &infile, Magic8Response responses[], const int &max_size);

//B
void PlayMagic8(Magic8Response responses[], const int& size);

//C
void PrintResponsesAndCategories(Magic8Response responses[], const int& size);

//D
void WriteResponsesToFile(Magic8Response responses[], const int& size);

//Extra credit
void DeleteResponse(Magic8Response responses[], const int& size);

//Helpers - you are welcome to add as many helper function as you need
void DisplayAndSelectMenu();

#endif //PA2_FUNCTIONS_H
