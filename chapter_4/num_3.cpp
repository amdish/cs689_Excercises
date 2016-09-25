#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string prompt;
	string inString;
	string longestString;
	ifstream inFile;

	cout << "Enter filename" << endl;
	cin >> prompt;

	inFile.open(prompt.c_str());
	if (inFile.fail())
		cerr << "Error" << endl;

	while (getline(inFile, inString))
	{
//		cout << "String: " << inString.length() << ": " << inString << endl; 		

		if (inString.length() > longestString.length())
			longestString = inString;
	} 	
	
	cout << longestString << endl;

	return 0;
}
