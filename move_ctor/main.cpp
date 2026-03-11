#include <iostream>
#include <crtdbg.h>
#include"Cstring.h"
#include"Smart.h"
using namespace std;

//int value = 1000;

//int& foo()
//{
//	return value;
//}

Cstring globalfunction(Cstring ss)
{
	//Cstring mystr;
	return ss;
}
// . :: sizeof() ?: typeid casting_operators

int myval = 100;
int main()
{
	{
		

		//int myval = 200;
		//::myval = 99;
		//cout << myval << endl;
		//cout << ::myval << endl;


		//SmartPointer ss("ETA INDIA");
		//ss->showstring();
		//(*ss).showstring();

		//Cstring s1("ETA");
	
		//Cstring ss;
		//s1 = s1;
		//s1.showstring();

		//Cstring ss;
		//ss= globalfunction(s1) + globalfunction(s1);
		//ss.showstring();

		//cout << value << endl;
		//foo() = 999;
		//cout << value << endl;


		//Cstring s1("ETA");
		//s1[0] = s1[1];
		//s1.showstring();

		//cout << s1[0] << endl;
		//s1.operator[](int);
		// 
		//s1.acceptstring();
		//s1.showstring();
		//Cstring s2("India");
		//Cstring s3;
		//s3 = s1 ;//s3.operator=(s1);
		//s3.showstring();

		//cout << &s1 << endl;
		//s1.acceptstring();
		//s1.showstring();
		//Cstring s2(s1);// Use copy ctor!
		//cout << &s2 << endl;
		//display_string(s1);
		
		//Cstring ss;
		//s2 = ss = s1;
		//s2.operator=(ss.operator=(s1));
		//ss.showstring();

		//s2.showstring();
		//s1.showstring();
		//ss = s1 + s2; //s1.operator+(s2);
		//ss.showstring();
		//{
			//s1 += s2;//s1.operator+=(s2);
			//s1.showstring();
		//}

		//int no_of_strings = 3;
		//Cstring* sptr = new Cstring[no_of_strings];
		//for (int i = 0; i < 3; ++i)
		//	sptr[i].acceptstring();

		//int x = 1000;
		//int& ref = x; // lvalue reference
		//ref = 2000;
		//cout << &ref << " " << &x << endl;

		//const int x = 100;
		//int* ptr = &x; 
		//*ptr = 2000;
		
		//const int* ptr = &x;
		//*ptr = 200; //error!
		//cout << x << endl;
		//ptr++;
		//x = 99;

		//int* ptr2 = const_cast<int*>(ptr);
		//*ptr2 = 1000;
		//cout << *ptr2 << " "<<ptr2 << endl;
		//cout << x << " " <<&x << endl;

		//Cstring mycompany("ETA INDIA");
		//for (char *ptr=mycompany.Begin();ptr!=mycompany.End();++ptr )
			//cout << *ptr << endl;

		//for (auto ptr : mycompany)
			//cout << ptr << endl;
	}
	cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
	return 0;

}
