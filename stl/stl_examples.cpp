#include <iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
#include<algorithm>
using namespace std;


int main()
{
	//array<int,5> arr{ 10,20,30,40,50};
	//int* ptr = arr.data();
	//cout << ptr << endl;

	//for (auto ptr : arr)
	//	cout << ptr << endl;

	//array<int,5>::iterator iter1;
	//for ( iter1=arr.begin();iter1!=arr.end();++iter1)
	//	cout << *iter1 << endl;

	//for (int i = 0; i < arr.size(); ++i)
	//	cout << arr[i] << endl;

	vector<int> v1{ 10,20,30 };
	////cout << v1.size() << " " << v1.capacity() << endl;
	//v1.push_back(40);
	//cout << v1.size() << " " << v1.capacity() << endl;
	//
	//v1.insert(v1.begin(),99);
	//v1.insert(v1.begin(),10, 2);
	//auto itr = v1.begin();
	//while (itr != v1.end())
	//{
	//	cout << *itr << endl;
	//	itr++;
	//}

	//itr = v1.begin();
	//v1.erase(v1.begin() + 1);

	//while (itr != v1.end())
	//{
	//	cout << *itr << endl;
	//	itr++;
	//}
	//Note: Mandatory Bring the iterator to the start everytime after using it!
	vector<int> v2{ 10,20,30,0,5,3,4 };

	sort(v2.begin(), v2.end());

	for (auto ptr : v2)
		cout << ptr << endl;

	vector<int>::iterator i=find(v2.begin(), v2.end(), 10000);

	if (i != v2.end())
	{
		cout << "Element is present " <<* i << endl;
	}
	else
	{
		cout << "Element is not present" << endl;
	}

	//cout << v2.size() << " " << v2.capacity() << endl;

	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);
	//v2.push_back(50);

	//v2.reserve(5);
	//cout << v2.size() << " " << v2.capacity() << endl;

	
	//vector<int>::reverse_iterator riter;
	//for (riter = v2.rbegin(); riter != v2.rend(); ++riter)
	//{
	//	(*riter) +=10;
	//	cout << *riter << endl;
	//}
	//vector<int>::const_iterator citer;

	//for (citer = v2.cbegin(); citer != v2.cend(); ++citer)
	//{
	//	cout << *citer << endl;
	//}
	
	//list<int> l1{ 10,20,30 };

	//forward_list<int> l2;
	
	return 0;
}

