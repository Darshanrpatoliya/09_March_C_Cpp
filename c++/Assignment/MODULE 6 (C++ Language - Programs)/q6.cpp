// Write a program of two concatenate the two strings using Operator
// Overloading 

#include <iostream>
#include <string.h>
using namespace std;

class STR {

public:
	char str[100];
	STR() {}

	STR(char str[])
	{
		strcpy(this->str, str);
	}

	STR operator+(STR& S2)
	{
		
		STR S3;

		strcat(this->str, S2.str);

		strcpy(S3.str, this->str);

		return S3;
	}
};


int main()
{
	
	char str1[] = "Darshan ";
	char str2[] = "Patoliya";

	
	STR a1(str1);
	STR a2(str2);
	STR a3;

	a3 = a1 + a2;
	cout << "Concatenation: " << a3.str;

	return 0;
}
