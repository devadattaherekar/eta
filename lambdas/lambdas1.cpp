// Lambdas C++11 Feature
// Functions without any name
#include <iostream>
#include<algorithm>
using namespace std;

//void display(int x)
//{
//    cout << x << endl;
//}

//Note: [capture list](<args>)<mutable><exception> -> (return type) {//lambda body};


int main()
{
    int arr[]{ 10,20,30,40,50 };
    //for_each(arr, arr + 5, display);

    //for_each(arr, arr + 5, [](int x) {cout << x << endl; });
    for_each(arr, arr + 5, [](auto x) {cout << x << endl; });//Before c++17

    //int value = 3;//Note: use capture list to capture values inside lambdas
    //for_each(arr, arr + 5, [value](auto x) { x += value; cout << x << endl; });//Before c++17
    //cout << "Value is " << value << endl;

    //for_each(arr, arr + 5, [&value](auto x) { x += value; cout << x << endl; });//Before c++17
    //cout << "Value is " << value << endl;

    // Note: Lambdas are immutable by default so if you want to modify variables from capture list
    // use mutable keyword

    //int sum = 0;
    //for_each(arr, arr + 5, [&sum](auto x) { sum+=x; cout << x<<" "<<sum << endl; });//Before c++17
    //cout << sum << endl;


    //for_each(arr, arr + 5, [sum](auto x)mutable { sum += x; cout << x << " " << sum << endl; });//Before c++17
    //cout << sum << endl;

    //Types of capture lists
    //    [var]  //by value
    //    [&var] //by ref
    //    [=] //everything by value
    //    [&] //everything by reference
    //    [&, var]//everything is reference except var
    //    [=, &var]//everything is value except var which is by reference

    //cppreference.com // For alltime reference
    //1. Thinking in C++ vol1 / vol2 Bruce Eckel (Before C++11)
    //2. Head First Design Patterns  
    //3. Effective Modern C++  Scott Meyers (C++11 or higher)
   

    //int sum = 0;
    //int count = 1;
    //for_each(arr, arr + 5, [&sum, &count](auto x) { sum += x; cout << x << " " << sum << endl; count++; });//Before c++17
    //cout << sum << " "<<count<<endl;

    //for_each(arr, arr + 5, [&](auto x) { sum += x; cout << x << " " << sum << endl; count++; });//Before c++17
    //cout << sum << " " << count << endl;


    return 0;
}

