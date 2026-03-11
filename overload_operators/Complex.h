#pragma once

extern int counter; 
// Note: counter is a global variable having external linkage
// so using extern keyword is mandatory to avoid linker error!

//const int value = 1000; // const will have internal linkage
//const can be safetly defined in header files

class Complex
{
	mutable int real{}; //state of the object can be changed in all const member functions
	int imag{};
	static int count;
	 //static data member does not belong to the object
	//It is shared data member among all other objects
public:
	   Complex();
	  //Complex()=default; //new C++11
	  Complex(int, int);
	  void foo();
	  void setreal(int);//mutator functions
	  void setimag(int);
	  int getreal()const;//accessor functions
	  int getimag()const;
	  void accept();
	  Complex operator+(const Complex&);
	  Complex operator-();
	  Complex& operator ++(); //preincrement must be used on iterators as it is efficient!
	  Complex operator ++(int);//postincrement
	  bool operator > (const Complex&);
	  void show()const;//helper functions
	  static void count_objects();
	  ~Complex() = default;
	  //constant member function is readonly function
	  //state of the object cannot be modified into constant mem function
};