#include<iostream>
#include"Complex.h"
using namespace std;

int counter; // global variable
int Complex::count = 0; // initilize static variable outside the class in one of .cpp files
// to void linker error!

extern const int value = 1000;

Complex::Complex() :real{ 0 }, imag{ 0 }
{
	counter++;
	count++;
}
Complex::Complex(int r,int i) :real{ r }, imag{ i }
{
	counter++;
	count++;
}
void Complex::foo()
{
	cout << "foo called" << "\n";
}
void Complex::setimag(int imag)
{
	this->imag = imag;
}
void Complex::setreal(int real)
{
	this->real = real;
}
int Complex::getreal()const
{
	//real = -999;
	return real;
}
int Complex::getimag()const
{
	return imag;
}

void Complex::accept()
{
	cout << "Enter real and imag" << endl;
	cin >> real >> imag;
}

Complex Complex::operator+(const Complex& cc)
{
	Complex temp;
	cout << "Add called" << "\n";
	temp.real = this->real + cc.real;
	temp.imag = (*this).imag + cc.imag;
	return temp;
}
Complex Complex::operator-()
{
	Complex temp;
	cout << "unary minus called" << "\n";
	temp.real = - this->real ;
	temp.imag = - (*this).imag ;
	return temp;
}
Complex& Complex::operator++()
{
	//Note: You can return by reference as it is not a local object
	// The scope of the object is for entire main
	cout << "Pre increment operator called" << endl;
	++this->real;
	++(*this).imag;
	return *this; // return the same invoking object
}
Complex Complex::operator++(int)
{
	//Note: You cannot return by reference // You have to return by value only
	cout << "Post increment operator called" << endl;
	Complex temp = *this;//capture the state of the invoking object into temp
	this->real++; //++ acts on the invoking object
	(*this).imag++;
	//this->operator++();
	//++(*this);
	return temp;//but return the previous state of the invoking object
}
bool Complex::operator>(const Complex&cc)
{
	cout << "operator > called" << endl;
	return real>cc.real? true:false;
}
void Complex::show()const
{
	//real = 99;//error!
	//cin >> imag;//error
	//real = 999;
	cout << real << " " << imag << "\n";
	//const_cast<Complex*>(this)->foo(); //use this for particular constant mem function to change state
}
void Complex::count_objects()
{
	//Note: There is no this pointer inside static and global functions 
	//One cannot acccess non static data members
	//One can only use global and static objects or members inside static functions
	// static global variable and static functions have internal linkage
	// so they can be safetly defined in header files
	cout << "Total = " << count << endl;
}