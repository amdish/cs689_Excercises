#include <iostream>
#include <string>

using namespace std;

bool endsWith(string, string);
bool endsWith(string, char);

int main()
{
	string ending("ol");	

	cout << endsWith("amol", ending) << endl;	
	cout << endsWith("amol", 'l') << endl;

	return 0;
}

bool endsWith(string str, string suffix)
{
	int suffixLength = suffix.length();
	
	string endStr = str.substr((str.length()-suffix.length()));

	return endStr == suffix;
//	return endStr.compare(suffix);

}

bool endsWith(string str, char ch)
{cout << "CHAR" << endl;
	if (str[str.length()-1] == ch)
		return true;
	else
		return false;

}
