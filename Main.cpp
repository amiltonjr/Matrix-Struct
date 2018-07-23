/*
Program name: Laboratory 13: String Struct
Written by: Amilton F de Camargo Jr, Felipe Coutinho, Matt
Date: April 2014
*/

#include <iostream>
#include "String.h"
using namespace std;

// Main function
int main() {
	String *s = createString("Hello World!");
	String *sub = substr(s, 1, 9);
	
	cout << "The string is: ";
	displayString(s);
	
	cout << endl;
	
	cout << "Position of the letter W: ";
	cout << find(s, 'W',  0);
	
	cout << endl;
	
	cout << "SubString(1, 9): "	;
	displayString(sub);
	
	cout << endl;
	
	cout << "Comparison between "; 
	displayString(s);
	cout << " and ";
	displayString(sub);
	cout << ": ";
	
	cout << compare(s, sub) << endl;
	
	destroyString(s);
	destroyString(sub);
	
	// End of the program
	return 0;
}
