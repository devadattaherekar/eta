#include<iostream>
#include"Cstring.h"
#include"Smart.h"

using namespace std;

SmartPointer::SmartPointer()
{
	sptr = new Cstring;
}
SmartPointer::SmartPointer(const char *mystring)
{
	sptr = new Cstring(mystring);
}
Cstring* SmartPointer::operator->()
{
	cout << "-> operator called" << endl;
	return sptr;
}
Cstring& SmartPointer::operator*()
{
	cout << "* operator called" << endl;
	return *sptr;
}
SmartPointer::~SmartPointer()
{
	if (sptr)
		delete sptr;
	sptr = nullptr;
}

