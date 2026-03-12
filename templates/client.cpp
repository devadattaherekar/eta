#include <iostream>
#include <string>
#include"Mystack.h"
//#include"mystack.cpp" //templates have internal linkage!

using namespace std;

int main()
{
    {
        Mystack <int>s1;
        try
        {
            s1.push(10);
            s1.push(20);
            s1.push(30);
            s1.push(40);
            s1.push(50);
            s1.display();
        }
        catch (const char* errmsg)
        {
            cout << errmsg << endl;
        }
        try
        {
            cout << "Poped is " << s1.pop() << endl;
            cout << "Poped is " << s1.pop() << endl;
            cout << "Poped is " << s1.pop() << endl;
            cout << "Poped is " << s1.pop() << endl;
            cout << "Poped is " << s1.pop() << endl;
            cout << "Poped is " << s1.pop() << endl;
        }
        catch (const char* errmsg)
        {
            cout << errmsg << endl;
        }
    }
    cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
    return 0;
}

