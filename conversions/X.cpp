#include<iostream>
#include"A.h"
#include "X.h"

using namespace std;

XYZ::XYZ()
{
}

XYZ::XYZ(int xx):x(xx)
{
	cout << "ctor syntax for xyz" << endl;
}
int XYZ::getx()const
{
	return x;
}
//XYZ::operator ABC()
//{
//	ABC a1(getx());
//	cout << "Operator conversion called" << endl;
//	return a1;
//}
void XYZ::showx()
{
	cout << x << endl;
}
