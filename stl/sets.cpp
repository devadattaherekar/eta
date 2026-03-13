#include<iostream>
#include<set>

using namespace std;


int main()
{
	set<int> s1{};
	s1.insert(100);
	s1.insert(200);
	s1.insert(300);
	s1.insert(400);
	s1.insert(500);
	s1.insert(600);
	set<int>::iterator ptr;
	for (ptr = s1.begin(); ptr != s1.end(); ++ptr)
		cout << *ptr << endl;
	auto i=find(s1.begin(), s1.end(), 100000);
	if (i != s1.end())
		cout << *i << " is present" << endl;
	else
		cout << "Not present!" << endl;

	return 0;
}
