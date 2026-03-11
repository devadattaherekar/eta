#pragma once
// New C++11 standard use move ctors and move assingment operators
// which will stop creating temporaries and avoid calls to copy ctors (costly operations)
// Follow the Rule of 5 Mandatory if your class contains dynamic attribute / RAW pointer
// 1. Destructor // Deallocate Memory on Heap to avoid Memory Leaks // Exit House keeping 
// e.g. close the database connections or any used resources like files
// 2. Copy Ctor // Dangling Pointer i.e. shallow copy
// 3. Assignment operator // To avoid Both i.e. Memory Leaks and Dangling Pointer!
// 4. move ctor //C++11
// 5. move assingment operator // C++11
class Cstring
{
	int len{};
	char* pbuff{};//dynamic attribute // Avoid using raw pointers always!
public: Cstring();
		Cstring(const char*);
		Cstring(const Cstring&);//Avoid Dangling pointer // Perform Deep Copy
		Cstring(Cstring&&); //move ctor will take rvalue reference
		void acceptstring();
		void showstring()const;
		Cstring operator + (const Cstring&);
		Cstring& operator +=(const Cstring&);
		Cstring& operator=(const Cstring& ss);
		Cstring& operator=(Cstring&& ss);
		char* begin()const;
		char* end()const;
		char& operator[](int);
		~Cstring();
};