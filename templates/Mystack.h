#pragma once

#include<iostream>

using namespace std;

template<typename T1>
class Mystack
{
	int top;
	int size;
	T1* m_pbuff;//dynamic attribute
public: Mystack()
		{
			top = -1;
			size = 5;
			m_pbuff = new T1[size];
		}
		void push(T1 num)
	    {
		  if (top == size - 1)
			  throw "stack full";
		  else
			  m_pbuff[++top] = num;
		}
		T1 pop()
		{
			if (top == -1)
				throw "stack empty";
			else
				return m_pbuff[top--];
		}
		void display()
		{
			int t = top;
			if (t == -1)
				cout << "Stack empty" << endl;
			while (t >= 0)
			{
				cout << m_pbuff[t] << endl;
				t--;
			}
		}
		~Mystack()
		{
			if (m_pbuff)
				delete[]m_pbuff;
			m_pbuff;
		}
};