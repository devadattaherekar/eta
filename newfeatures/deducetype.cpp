#include<iostream>
using namespace std;

//template<typename T1,typename T2>
//auto add(T1 t, T2 u)->decltype(t+u)
//{
//	return t + u;
//}

//decltype takes care of additional qualifiers const / volatile / references
// to deduce auto type inference which is not taken care by auto
int main()
{
	struct A { double x; };
	const A* a;
	
	decltype(a->x) y = 123.45;

	auto z = y;

	decltype((a->x)) y = 123.45;
	cout << y << endl;

	const int x1 = 100;
	auto x2{ x1 };

	decltype(auto)x2{ x1 };

	int x3 = 100;
	int& ref2 = x3;
	auto ref3 = ref2;
	decltype(auto)ref4{ ref2};

	int&& rvref = 1000;
	//auto myvalue1 = rvref;//error!
	decltype(auto)myvalue1{ move(rvref) };
	//rvalue references are also not preserved by auto
	//use decltype(auto) instead!
	return 0;
}