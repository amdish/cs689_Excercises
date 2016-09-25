#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int words, chars, lines = 0;
	string inString;
	char ch;
	ifstream inFile;
	inFile.open("Lear.txt");
	if (inFile.fail())
	{	cerr << "Error Opening file" << endl;
		exit(EXIT_FAILURE);	
	}
	
	while (inFile.get(ch))
	{
		chars++;
		if (isspace(ch))
		{
			words++;
			while (inFile.get(ch))
			{	chars++; if (!isspace()) break; }
			if (ch == '\n')
				lines++;
		}
	}
	
	cout << "Chars: " << chars << endl;
	cout << "Words: " << words << endl;
	cout << "Lines: " << lines << endl;

	return 0;
}
