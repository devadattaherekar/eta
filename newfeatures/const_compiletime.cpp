#include<iostream>
#include <stdio.h>

using namespace std;

void foo(int* ptr)
{
	*ptr = 99;
	cout << "foo called" << " "<<*ptr<< endl;
}

int getsize()
{
	return 100;
}
int myval = 87;
int& bar()
{
	return myval;
}
void myfoo(int &myref)
{
	cout << "myfoo int & called" << endl;
}
void myfoo(const int& myref)
{
	cout << "myfoo const int& called" << endl;
}
void myfoo(int&& myref)
{
	cout << "myfoo int&& called" << endl;
}

int main()
{
	//int x = 10, y = 20;
	//int z = x + y; // Here the expression is rvalue as you cannot get the address
	//cout << x << " " << y << endl; // x and y are lvalues

	//int& ref = x; // Here ref is lvalue reference
	
	//Note: lvalue references are bound to lvalues only
	// you cannot bind it to rvalues
	//int& ref = x + y; //error!

	//int&& rvalueref = x + y; // New C++ rvalue references

	//cout << rvalueref << endl;

	//int&& rvalueref1 = 10000; //rvalue 
	//cout << rvalueref1 << endl;


	//int&& rvalueref2 = getsize();
	//cout << rvalueref2 << endl;

	//you cannot bind lvalue to rvalue references
	//int&& rvalueref2 = bar();//error!

	//int& lvalueref = bar();//lvalue reference



	//int xyz = 1000;
	//myfoo(xyz);
	//myfoo(1000); // Bind to exact match which is rvalue reference

	//const int abc = 2000;
	//myfoo(abc);// const reference is exact match!

	//reference to a constant must be constant reference
	//const int k = 123;
	//const int& myref1 = k;

	//foo(const_cast<int*>(&x));
	//cout << x << endl;

	//const int x = 10;
	//int* ptr = const_cast<int*>( & x);
	//*ptr = 2000;
	//printf("%u %u\n", &x, ptr);
	//printf("%d %d\n", x, *ptr);

	//int x = 100;
	//int& ref = x;
	//int * const ref=&x;
	//ref = 200;
	//cout << x << endl;

	//*ref = 200;
	//(*ref)++;
	
	//cout << x << endl;
	//cout << &ref << " "<<&x<<endl;

	//int arr[3] = { 10,20,30 };

	//int* arr = new int[3] {};
	//int(&ref)[3] = arr;
	//int* const & ref = arr;
	//for (int i = 0; i < 3; ++i)
		//cout << ref[i] << endl;

	return 0;
}

