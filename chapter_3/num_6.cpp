//Chapter 3
//Number 6

#include <iostream>
#include <string>

using namespace std;

string acronym(string);

int main()
{
	string str = "Hello World";

	cout << acronym(str) << endl;
	
	return 0;
}

string acronym(string inStr)
{
	string acronym;
	if (isalpha(inStr[0]))
	{
		acronym += inStr[0];
	}
	
	for (unsigned i = 1; i < inStr.length()-1; i++)
	{
		if (isalpha(inStr[i]) && inStr[i-1] == ' ')
			acronym += inStr[i]; 
	}
	
	return acronym;
}
