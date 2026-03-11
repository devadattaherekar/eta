#pragma once
//Note: Forward declaration works with pointers and references only
// Never include the header file!
// Modern C++ 11 
// 1. auto_ptr (deprecated) move semantics not available in c++98/2000
// 2. shared_ptr (shared resource)
// 3. unique_ptr (ownership resource)
// 4. weak_ptr (cyclic dependecies)

class Complex; 

class SmartPointer
{
	Complex* cptr;
public: SmartPointer();
	  SmartPointer(int, int);
	  Complex* operator->();
	  Complex& operator*();
	  ~SmartPointer();
};