#include<iostream>

using namespace std;

constexpr int max(const int x, const int y)
{
	return x + y;
}

int getsize3()
{
	return 5;
}

const int getsize4()
{
	return 5;
}

constexpr int getsize5()
{
	return 5;
}

constexpr int calculate(const int x, const int y)
{
	return x + y;
}
class Testing
{
	//Note: Here constexpr can be used to create header only declarations!
	constexpr static int x{ 0 };
public: Testing(){}
	  void show() { cout << x << endl; }
};
//int Testing::x;

int main()
{

	// Note:const int can be treated be treated as compile time constant
	// since it is returning constexpr but Vice versa is not true ERROR!
	const int myvalue=max(100, 200);

	int myarr[myvalue];
	 
	//const int size1 = 5;
	//int arr1[size1]; // compile time constant in C++

	//constexpr int size2 = 5;
	//int arr2[size2]; // compile time constant in new C++11 feature 

	//// Now getsize3 function is returning const
	//// But Note: This function is not a compile time constant
	//const int size3 =getsize3(); 
	////int arr2[size3]; // compile time constant in C++

	////const int size4 = getsize4(); //works but size4 is not compile time constant
	////int arr3[size4]; // compile time constant in C++

	//const int size5 = getsize5(); //works but size5 is compile time constant
	//int arr3[size5]; // compile time constant in C++

	//int x = 10, y = 20;
	//const int sum1 = x + y;
	//const int sum2 = 10 + 20;

	////constexpr int sum3 = x + y;  // compiler error
	//constexpr int sum4 = 10 + 20; //no error

	////const int sum6 =  calculate(x, y);
	////int array[sum6];

	////constexpr int sum6 =  calculate(100,200);
	////int array[sum6];

	////cout << calculate(100, 200) << endl;

	//Testing t1;
	//t1.show();
	return 0;
}