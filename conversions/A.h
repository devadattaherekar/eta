#pragma once
#include<iostream>
class XYZ;
class ABC
{
	int a;
public: ABC();
	    ABC(int);
		ABC(const XYZ&);// No temporaries can be created by this automatically
		void operator=(XYZ&);
		friend std::ostream& operator << (std::ostream& out, const ABC& a);
		friend std::istream& operator >> (std::istream& in, ABC& a);
		void showa();
};