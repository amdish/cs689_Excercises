#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream inFile;
	int n;
	vector<int> vecInt;

	inFile.open("list.txt");

	while (inFile >> n)
	{
		vecInt.push_back(n);
	}

	vector<int> vec2(vecInt);

	for (unsigned i = 0; i < vec2.size(); i++)
	{
		cout << vec2[i] << endl;
	}

	return 0;
}
