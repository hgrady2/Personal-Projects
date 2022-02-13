//Book selector program 
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; 

int main()
{
	//Create needed variables 
	int numOfBooks;
	char continueProgram;


	do {

		//Have the user enter in the number of books they are trying to select from 
		cout << "Please enter the number of books you want to select from: ";
		cin >> numOfBooks;

		//Get the title of each book from the user, having them enter it on a new line each time 
		for (int index = 0; index < numOfBooks; index++)
		{

		}


		cout << "Please type Y to go through the program again"; 
		cin >> continueProgram;

	} while (continueProgram == 'Y' || continueProgram == 'y');
}
