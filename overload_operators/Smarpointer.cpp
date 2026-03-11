#include<iostream>
#include"Complex.h"
#include"SmartPointer.h"

using namespace std;

SmartPointer::SmartPointer()
{
	cptr = new Complex;
}
SmartPointer::SmartPointer(int real,int imag)
{
	cptr = new Complex(real, imag);
}
Complex* SmartPointer::operator->()
{
	cout << "-> operator called" << endl;
	return cptr;
}
Complex& SmartPointer::operator*()
{
	cout << "* operator called" << endl;
	return *cptr;
}
SmartPointer::~SmartPointer()
{
	if (cptr)
		delete cptr;
	cptr = nullptr;
}