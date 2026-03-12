#include <iostream>
#include<string>
#include<crtdbg.h>
using namespace std;

class Bank
{
    string bname;
public: Bank(string bn):bname(bn){}
        string getbkdetails()const { return bname; }
        void showbankdetails()const { cout << bname << endl; }
};

class Customer
{
    Bank* bk{};
public: void setbk(Bank* bk1)
        {
              bk = bk1;
        }
        Bank* getbk() const
        {
              return bk;
        }
};

int main()
{
    {
        Bank* b1 = new Bank("Kotak");
        cout << b1->getbkdetails() << endl;
        b1->showbankdetails();
        //delete b1;
        //b1 = nullptr;

        Customer* c1 = new Customer;
        c1->setbk(b1);
        c1->getbk()->getbkdetails();
        delete c1;

        Customer* c2 = new Customer;
        c2->setbk(b1);
        c2->getbk()->getbkdetails();
        delete c2;
        
        b1->showbankdetails();
        delete b1;
    }
    cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
    return 0;
}

