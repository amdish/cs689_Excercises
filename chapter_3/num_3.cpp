#include <iostream>
#include <string>

using namespace std;

string substr(string,int,int = -1);

int main()
{
	string str("Hello");
	cout << substr(str,1,-2) << endl;
	return 0;
}

string substr(string str, int pos, int n)
{
	string subString;

	if (pos > str.length()-1)
	{
		cerr << "Error: Position exceed string" << endl;
		exit(EXIT_FAILURE);
	}
	else if (n == -1 || n + pos >= str.length())
	{
		n = str.length() - pos;	
	}

	for (unsigned i = pos; i <= n; i++)
	{
		subString += str[i];		
	}	
	
	return subString;
}

