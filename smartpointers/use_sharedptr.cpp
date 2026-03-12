#include <iostream>
#include<string>
#include<crtdbg.h>
#include<memory> //for shared_ptr / unique_ptr
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
    shared_ptr<Bank> bk{};
public: void setbk(shared_ptr<Bank>&(bk1))
        {
              bk = bk1;
        }
        const shared_ptr<Bank>& getbk() const
        {
              return bk;
        }
};

int main()
{
    {
        //Bank* b1 = new Bank("Kotak");
        shared_ptr<Bank> b1{ new Bank("Kotak") };
        cout << b1->getbkdetails() << endl;
        b1->showbankdetails();
        //delete b1;
        //b1 = nullptr;

        //Customer* c1 = new Customer;
        shared_ptr<Customer> c1{ new Customer };
        c1->setbk(b1);
        c1->getbk()->getbkdetails();
        //delete c1;

        //Customer* c2 = new Customer;
        shared_ptr<Customer> c2{ new Customer };
        c2->setbk(b1);
        c2->getbk()->getbkdetails();
        //delete c2;
        
        //b1->showbankdetails();
        //delete b1;
    }
    cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
    return 0;
}

