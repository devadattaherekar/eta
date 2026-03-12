#include<iostream>
#include<string>
#include"A.h"
#include"X.h"

using namespace std;

int main()
{
	ABC a1(100);
	cin >> a1;
	cout << a1;

	//cout << a1; //operator <<(cout,a1);
	//a1.showa();

	XYZ x1(200);
	x1.showx();

	//a1 = x1; //a1.operator=(x1);
	//a1.showa();// 200

	//a1 = ABC(x1);
	//a1.showa(); // 200

	//a1 = x1.operator ABC();
	//a1.showa();//200 

	a1 = x1;

	return 0;
}