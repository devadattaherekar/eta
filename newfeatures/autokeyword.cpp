#include<iostream>
#include<typeinfo>
using namespace std;

void foo(auto xx)
{
	//if (typeid(xx)==int)
		cout << "foo called " << xx << endl;
}

int main()
{
	auto x = 100;
	//typeid operator returns reference to an object of typeinfo class
	//which call const member function name() whose return type is const char*
	//cout << typeid(x).name() << endl;

	const auto y = 100;

	auto z = y; // use const keyword mandatory with auto keyword

	auto ptr = &x;//using * is optional for pointer with auto

	auto & ref = x; // using & is mandatory with auto for references

	foo(x);
	foo("eta");
	foo(5.6);

	int arr[]{ 10,20,30,40,50 };

	//for (int* ptr = arr; ptr != arr + 5; ++ptr) {
		//*ptr = 100;
		//cout << *ptr << endl;
	//}

	//range based for loop to iterate container objects C++11 feature
	//Note: Reference is mandatory with range based for loop
	// To modify the collection 
	for (auto &ptr : arr) {
		ptr += 1;// Will not change actual collection
		cout << ptr << endl;
	}
	cout << "\n";
	for (auto ptr : arr)
		cout << ptr << endl;

	return 0;
}