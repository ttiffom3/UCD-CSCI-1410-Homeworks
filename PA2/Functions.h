//
// Created by Henok on 3/5/2019.
//

#ifndef PA2_FUNCTIONS_H
#define PA2_FUNCTIONS_H

#include <string>
#include <fstream>
#include <iostream> 
#include <cstdlib> //srand and rand
#include <time.h> //time, used to get a truly random number
#include <algorithm> //sort, used to sort the members in the struct array in PrintResponsesAndCategories()

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
