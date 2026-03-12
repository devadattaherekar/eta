#include <iostream>
#include <memory> 
#include<crtdbg.h>
//Note: Automatic Memory Management in C++11
// 1. unique_ptr 2. shared_ptr 3. weak_ptr  4. auto_ptr (deprecated c++17 onwards) heaven!
 
using namespace std;

class Complex
{
	int real, imag;
public: Complex() = default;
	  Complex(int r, int i) :real{ r }, imag{ i } {}
	  int getreal()const { return real; }
	  int getimag()const { return imag; }
	  void setreal(int r) { real=r; }
	  void setimag(int i) { imag=i; }

};

unique_ptr<Complex> createobject(int r, int i)
{
	unique_ptr<Complex> cptr{ new Complex{r,i} };
	return cptr;
}
//Note: Reference is mandatory as unique_ptr cannot be copied // copy ctor is deleted!
void displayobject(unique_ptr<Complex> &cptr)
{
	cout << "Inside displayobject..." << endl;
	cout << cptr->getreal() << " " << cptr->getimag() << endl;
}
void processobject(unique_ptr<Complex> cptr)
{
	cout << "Inside processobject..." << endl;
	cptr->setreal(999);
	cptr->setimag(-888);
}

int main()
{
	{
		//Complex* cptr1 = new Complex;
		unique_ptr<Complex> cptr1{ new Complex };
		cptr1->setreal(100);
		(*cptr1).setimag(-99);
		cout << cptr1->getreal() << " " << cptr1->getimag() << endl;
	
		unique_ptr<Complex> cptr2(createobject(10,20));
		cout << cptr2->getreal() << " " << cptr2->getimag() << endl;

		displayobject(cptr2);
		processobject(move(cptr2));
		//Note: reset is mandatory after performing move operations
		cptr2.reset(new Complex{});
		displayobject(cptr2);

		//int* ptr = new int{10};
		//cin >> *ptr;
		//cout << *ptr;
		//delete ptr;
		//ptr = nullptr;

		//tradional way to instantiate smart pointers
		//unique_ptr<int> ptr1{ new int {10} };
		//cin >> *ptr1;
		//cout << *ptr1<<endl;

		//Note use make_unique template to create smart pointers efficiently
		//As they are fast and light weight
		//unique_ptr<int> ptr2= make_unique <int>(20) ;
		//cin >> *ptr1;
		//cout << *ptr2 << endl;


		//unique_ptr<int> ptr2{ ptr1 }; // copy ctor is deleted
		//ptr2 = ptr1; //Assingment operator is deleted // Compiler error!
		//cout << *ptr2;

		//unique_ptr<int> ptr3 = std::move(ptr2);//use move semantics to transfer ownership
		//cout << *ptr3 << endl;

		//reset will release the resource and set the pointer to nullptr
		//ptr3.reset(new int{});//will release the object 
		//ptr3.reset(new int{});//you can reset multiple times no error! 
		//ptr3.reset(new int{5000});//reset can also be used to reinitialize 
		//cout << *ptr3 << endl;

	}
	cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;

	return 0;
}
