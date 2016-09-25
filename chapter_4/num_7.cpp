#include <iostream>
#include <string>
#include <fstream>
#include <random>


using namespace std;

int main()
{
	srand(time(NULL));

	char ch;	
	int randNum;	
	ifstream inFile;
	inFile.open("Lear.txt");
	if (inFile.fail())
	{
		cerr << "Error openening file" << endl;
	}

	while (inFile.get(ch))
	{
		if (isupper(ch))
		{
			randNum = rand() % (26);
			cout << char(randNum+65);
		}
		else if (islower(ch))
		{
			randNum = rand() % (26);
			cout << char(randNum+97);
		}
		else
			cout << ch;
	}
	
	return 0;
}
