#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include"Cstring.h"
using namespace std;

Cstring::Cstring()
{
	cout << "ctor default" << endl;
	pbuff = new char{ '\0' };
	len = 0;
}
Cstring::Cstring(const char *s)
{
	cout << "ctor parameterized" << endl;
	len = strlen(s);
	pbuff = new char[len+1];
	strcpy(pbuff, s);
}
Cstring::Cstring(const Cstring &s)
{
	cout << "copy ctor" << endl;
	len = s.len;
	pbuff = new char[len + 1];
	strcpy(pbuff, s.pbuff);
}
Cstring::Cstring( Cstring&& s)
{
	cout << "move ctor" << endl;
	len = s.len;//copy all members
	pbuff = s.pbuff; //perform shallow copy in move ctor
	s.pbuff = nullptr;//mandatory to set the pointer to nullptr 
	//after perform move operation or perform shallow copy 
	//as you dont want danging pointer bez of move ctor!
}

void Cstring::acceptstring()
{
	delete[]pbuff; // release old memory first
	cout << "Enter the string" << endl;
	pbuff = new char[80]; // allocate new memory
	cin.getline(this->pbuff, 80); //accept the string
	(*this).len=strlen(pbuff);
}
Cstring& Cstring::operator=(const Cstring& ss)
{
	cout << "Assingment operator called" << endl;
	if (this == &ss)//self assingment 
		return *this;
	else
	{
		len = ss.len;
		delete[]pbuff; // release old memory first
		pbuff = new char[len + 1];//allocate new memory
		strcpy(pbuff, ss.pbuff);//perform deep copy
		return *this;// return the same invoking object
	}
}

Cstring& Cstring::operator=(Cstring&& ss)
{
	cout << "Move Assingment operator called" << endl;
	if (this == &ss)//self assingment 
		return *this;
	else
	{
		len = ss.len;
		pbuff= ss.pbuff; //perform shallow copy
		ss.pbuff = nullptr;//set the pointer to nullptr
		return *this;// return the same invoking object
	}
}
char& Cstring::operator[](int index)
{
	//Note: return by reference to make the function lvalue and rvalue both
	//By reference you return address of the variable rather than the value
	cout << "[] operator called" << endl;
	if (index>=0 && index < this->len)
		return pbuff[index];
}
Cstring Cstring::operator+(const Cstring &ss)
{
	cout << "operator + called" << "\n";
	Cstring temp;
	delete[]temp.pbuff; // release old memory first
	temp.len = this->len + ss.len;
	temp.pbuff = new char[temp.len+1]; // allocate new memory
	strcpy(temp.pbuff, pbuff);
	strcat(temp.pbuff, ss.pbuff);
	//(*this).len = strlen(pbuff);
	return temp;
}
Cstring& Cstring::operator+=(const Cstring& ss)
{
	cout << "operator += called" << "\n";
	len += ss.len;
	char* temp = new char[80];
	strcpy(temp, pbuff);
	delete[]pbuff; // release old memory first!
	pbuff = new char[len + 1]; // allocate new memory
	strcpy(pbuff, temp);
	strcat(pbuff, ss.pbuff);
	delete[]temp;
	return *this;
}
Cstring::~Cstring()
{
	cout << "dtor executed" << endl;
	if (pbuff)
		delete[]pbuff;
	pbuff = nullptr;
}

//Note: Always pass by reference and return by reference to avoid shallow copies
//Because shallow copies call user defined copy ctors which are costly operations
//Note: You cannot return local objects by reference because you cannot refer to 
// an address of object which is removed from stack!

Cstring& display_string(Cstring& ss)//copy ctor
{
	return ss;//copy ctor
}

void Cstring::showstring()const
{
	cout << len<<" "<<pbuff << " " << endl;
}
char* Cstring::begin()const
{
	return pbuff;
}
char* Cstring::end()const
{
	return pbuff+len;
}
