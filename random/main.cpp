#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int x;
	vector<int> vec(1);
	int count = 0;
	while (cin >> x)
	{
		count++;
		vec.push_back(x);
		if (count == 7) break;
	}
	
	for (unsigned i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << endl;
	}

	
	return 0;
}
