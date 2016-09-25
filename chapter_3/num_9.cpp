#include <iostream>
#include <string>

using namespace std;

string removeDoubledLetters(string);

int main()
{
	string str("BOOKEEPER");
	cout << removeDoubledLetters(str) << endl;


	return 0;
}

string removeDoubledLetters(string inStr)
{
	string newString;
	newString += inStr[0];

	for (unsigned i = 1; i < inStr.length(); i++)
	{
		if (newString[newString.length()-1] == inStr[i])
		{}
		else
			newString += inStr[i];
	}
	return newString;
}
