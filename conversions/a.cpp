#include<iostream>
#include "A.h"
#include "X.h"
using namespace std;

ABC::ABC()
{
}
ABC::ABC(const XYZ& x)
{
	cout << "ctor syntax ABC called" << endl;
	a = x.getx();// There is only one attribute // Note: initialize rest if available
}
void ABC::operator=(XYZ& xx)
{
	cout << "Assingment operator called" << endl;
	a = xx.getx();
}
ABC::ABC(int aa) :a(aa)
{
	cout << "ctor syntax abc" << endl;
}

void ABC::showa()
{
	cout << a << endl;
}

ostream& operator << (ostream& out, const ABC& a)
{
	cout << "ostream called" << endl;
	out << a.a << endl;
	return out;
}

istream& operator >> (istream& in, ABC& a)
{
	cout << "istream called" << endl;
	in >> a.a;
	return in;
}
