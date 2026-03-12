#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<iostream>
//Note: Templates have internal linkage
//Templates can safetly defined in header files only
template<typename T1>
void myswap(T1& val1, T1& val2)
{
	T1 temp;
	temp = val1;
	val1 = val2;
	val2 = temp;
}
template<typename T1,typename T2>
void show(T1&& val1, T2&& val2)
{
	std::cout << val1 << " " << val2 << std::endl;
}
//Global functions will have external linkage 
//They cannot be defined in header files // use separate cpp file!
void myswap(char val1[], char val2[]);

