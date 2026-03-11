#include<iostream>
#include<crtdbg.h>
#include"SmartPointer.h"
#include"Complex.h"
using namespace std;

extern const int value;


//class Employee
//{
//	int emp_id;
//	char name[20];
//	public :void accept_empdetails()
//	{
//		cout << "Enter id and name" << endl;
//		cin >> emp_id >> name;
//	}
//	void show_empdetails()
//	{
//		cout << "Entered Details are..." << endl;
//		cout << (*this).emp_id << " " << this->name << "\n";
//	}
//};


int main()
{
	//Complex c1;
	//Complex cc;
	//cc=c1 + 100; //c1.operator+(int);
	//cc = 100 + c1; //operator+(int,Complex&);
	//cc.show();
	//cout << value << endl;
	//Employee e1 {};
	//e1.accept_empdetails();
	//e1.show_empdetails();

	// const object can only call const memeber functions
	//const Complex c1{ 1,-2 };
	//c1.show();
	//cout << c1.getreal() << " " << c1.getimag() << "\n";
	// non const object can call const member functions
	//Complex c2;
	//c2.setreal(10);
	//c2.setimag(-99);
	//c2.show();
	{
		//Complex* cptr = new Complex();
		//cptr->show();
		//delete cptr;
		//cptr = nullptr;

		//int size = 3;
		//cout << "How many objects" << endl;
		//cin >> size;

		//Complex* cptr = new Complex[size]; //runtime object
		////Note: In mutator functions the state of the object gets modified for the second time
		//for (int i = 0; i < size; ++i)
		//	(cptr + i)->accept();

		//cout << "Complex objects are..." << "\n";
		//for (int i = 0; i < size; ++i)
		//	cptr[i].show();

		//delete[]cptr;
		//cptr = nullptr;

		//cptr->show();
		//delete cptr;
		//cptr = nullptr;
	}
		{

			
			//const int size = 3;
			//Complex cptr[size]; //compile time object
			////Note: In mutator functions the state of the object gets modified for the second time
			//for (int i = 0; i < size; ++i)
			//	(cptr + i)->accept();

			//cout << "Complex objects are..." << "\n";
			//for (int i = 0; i < size; ++i)
			//	cptr[i].show();
			//Complex c1(100, 200);
			//Complex c2(4,5);
			//Complex c3;
			//cc=c1*c2+c3/c4-c5;

			//c3 = c1+c2; //c1.operator+(c2);
			//c3.show();//104 205 
			//c3 = -c1; //c1.operator-();
			//c3.show(); // -100 -200

			//c3 = ++c1; //c1.operator++();
			//c1.show(); // -101 -201
			//c3.show(); // -101 -201

			//c3 = c1++; //c1.operator++(int);
			//c1.show(); // -102 -202
			//c3.show(); // -101 -201

			// > < >= <= == != relational operators

			//if (c1 > c2) // ( c1.operator > (c2) )
			//	cout << "c1 is greater" << endl;
			//else
			//	cout << "c2 is greater" << endl;

			//Complex cc;
			//Complex cc;
			//cc = c1;
			//cc.show();
			//cout << sizeof(c1) << endl;
			//cout << "Total number of objects " << counter<<"\n";
			//c1.count_objects(); // It can also be invoked using objects!
			//Complex::count_objects(); // invoke static functions using class name!

			//Complex* cptr = new Complex(4, 5);
			//cptr->accept();
			//cptr->show();
			//cout << cptr->getreal() << " " << (*cptr).getimag() << endl;
			//delete cptr;

			SmartPointer s1(40,50);			
			//s1->accept();//(s1.operator->())->accept();
			//(s1.operator->())->show();

			//cout <<(*s1).getreal() << " " << (*s1).getimag() << endl;

			s1->show();
	
		}

	cout << "Memory Leaks " << _CrtDumpMemoryLeaks() << endl;
	return 0;
}