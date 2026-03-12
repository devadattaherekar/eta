#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include"myheader.h"

using namespace std;


int main()
{
	//string country1("india"), country2("new zeland");
	//cout << country1 << " " << country2 << endl;
	//myswap(country1, country2);
	//cout << country1 << " " << country2 << endl;

	int x = 10, y = 20;
	//cout << x << " " << y << endl;
	//myswap(x,y);
	//cout << x << " " << y << endl;

	//char  c1[20]{ "eta" }, c2[20]{ "vinsys" };
	//cout << c1 << " " << c2 << endl;
	//myswap(c1, c2);
	//cout << c1 << " " << c2 << endl;

	show(x, y);
	show(1000, "ETA");
	show(4.5f, 1000);
	show("Eta", "Vinsys");


	return 0;
}

