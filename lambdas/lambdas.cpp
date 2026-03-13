// Lambdas C++11 Feature
// Functions without any name
#include <iostream>
#include<string>
#include"head.h"

using namespace std;



int main()
{
    [ ] () {cout << " lambda called " << endl; }(); //lambda directly
    auto ref1=[]() {cout << " lambda called " << endl; };
    ref1();

    auto addref = [](int x, int y) {return x + y; };
    cout << addref(100, 200) << endl;

    AnonymousFn <int> afun;
    cout << afun.sum1(1000, 2000) << endl;

    auto mysum = [](auto x, auto y) { return x + y; };
    cout << mysum(1.5, 2.6) << endl;
    cout << mysum(string("eta"),string("vinsys")) << endl;
;

  
    return 0;
}

