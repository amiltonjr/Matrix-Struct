#include <iostream>
#include "String.h"
using namespace std;

int contStr(const char* char_array) {
	int i = 0;
	
	while (char_array[i] != '\0')
		i++;
		
	return i;
}

void displayString(String* str) {
	int i = 0;
	
	while (str -> str[i] != '\0') {
		cout << str -> str[i++];
	}
}

void destroyString(String* str) {
	delete [] str->str;
	delete str;
	str = NULL;
}

int find(String* str, char delimiter, int start) {
	int i = start;
	
	if (start < 0 || start > contStr(str->str))
		return -1;
		
	while (str->str[i] != '\0' && str->str[i] != delimiter)
		i++;
		
	return str->str[i] == '\0'? -1 : i; 
}

int stringLength(String* str) {
	int i=0;

	while ( str->str[i] != '\0' )
		i++;

	return i;
}

String* substr(String* str, int start, int length) {
	if ( length > stringLength(str) )
		return 0;

	String *newSubStr = new String;
	int i, j;
	
	newSubStr -> str = new char[length + 1];
	
	for (i = start, j = 0; i < (length+start); i++, j++) {
		newSubStr -> str[j] = str-> str[i];
	}
	
	newSubStr -> str[j] = '\0';
	
	return newSubStr;
}

int compare(String* str1, String* str2) {
	int i = 0, j = 0;
	
	while (str1->str[i] != '\0' && str2->str[i] != '\0') {
		if (str1->str[i] > str2->str[i])
			return 1;
		else if (str1->str[i] < str2->str[i])
			return -1;
		
		i++;
	}
	
	if (str1->str[i] == '\0' && str2->str[i] == '\0')
		return 0;
	else if (str1->str[i] == '\0')
		return -1;
	else
		return 1;
}

String* createString(const char* char_array) {
	String *newString = NULL;
	int size = contStr(char_array);
	int i;
	
	if (size > 0) {
		newString = new String;
		
		if (newString != NULL) {
			newString -> str = new char[size + 1];
				
			for (i = 0; i < size; i++) {
				newString -> str[i] = char_array[i];
			}
			
			newString -> str[i] = '\0';
		}
	}
	
	return newString;
}
