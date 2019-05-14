// #include "Functions.h"
/*
NAME: Torin May
CLASS: CSCI 1410
DESCRIPTION: Contains function descriptions and an outline
STATUS: Not running, just function descriptions and an outline
*/

/*
OUTLINE
Use do/while loop to keep program running.
Run through main.
Display menu.
Use switch and take a user input which corresponds to the menu.
Automatically read responses from a file because it is needed for the whole program.
If user selects A dont do anything because the file was already read.
If user selects B run the function PlayMagic8 (description below).
If user selects C run the function PrintResponsesAndCategories (description below).
If user selects D run the function WriteResponsesToFile (description below).
If user selects E it exits the program and says Goodbye.
If user selects F run the function DeleteResponse (description below).
*/

/*
ReadResponses

Using ifstream read all the lines from a txt file.
Since the txt file goes answer, category, answer, category and so on, use a while loop and getline and insert these lines into an array of structs.
The array of structs of length MAX_LENGTH then has two members, the category and answer. Insert the lines into the corresponding member.
*/

/*
PlayMagic8

Generate a random number using time as null to get a truly random answer.
This is what is done in http://www.cplusplus.com/reference/cstdlib/rand/.
Use % to limit the random number to the range 0 to the max size of the arrays.
Use the random integer as the index for choosing a random response from the struct array answers member.
*/

/*
PrintResponsesAndCategories

Put each category member and answer member within the struct array into its own array of size MAX_SIZE.
Using the algorithm header file use std::sort to sort both the arrays.
Print them side by side in the console with a | spliting them.
*/

/*
WriteResponsesToFile

Takes all the strings in the category and answer members of the struct array and write them to a file. 
Uses for loop and ofstream to do this.
*/

/*
DeleteResponse

This function shifts all values in the category and answer members by assigning the current struct index with the next struct index and so on until the size.
*/