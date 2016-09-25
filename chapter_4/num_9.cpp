#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	char Rch, Ech;
	ifstream inFile;
	ofstream outFile;

	cout << "Which charecter would you like to eliminate: ";
	cin >> Ech;

	Ech = tolower(Ech);

	inFile.open("Lear.txt");
	outFile.open("OUT.txt");

	while (inFile.get(Rch))
	{
		if (tolower(Rch) == Ech){}
		else
			outFile.put(Rch);
	}

	return 0;
}
