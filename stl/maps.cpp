#include <iostream>
#include <map> //key : value pairs // duplicate keys are allowe in multimap!
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	map<char, int> mymap;
	mymap.insert(pair<char, int>('x', 100));
	mymap.insert(pair<char, int>('y', 200));
	mymap.insert(pair<char, int>('z', 300));

	for (auto i : mymap)
	{
		cout << i.first << " " << i.second << endl;
	}

	return 0;
}