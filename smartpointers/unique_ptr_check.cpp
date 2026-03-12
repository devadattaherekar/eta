#include <iostream>
#include<string>
#include<crtdbg.h>
#include<memory> //for shared_ptr / unique_ptr
using namespace std;

class Bank
{
    string bname;
public: Bank(string bn) :bname(bn) {}
      string getbkdetails()const { return bname; }
      void showbankdetails()const { cout << bname << endl; }
};

class Customer
{
    unique_ptr<Bank> bk{};
public: void setbk(unique_ptr<Bank>& (bk1))
        {
            bk = move(bk1);
            //bk = bk1;
        }
        const unique_ptr<Bank>& getbk() const
        {
              return bk;
        }
};

int main()
{
    {
        //Bank* b1 = new Bank("Kotak");
        unique_ptr<Bank> b1{ make_unique<Bank>("bob")};
        cout << b1->getbkdetails() << endl;
        b1->showbankdetails();
        //delete b1;
        //b1 = nullptr;

        //Customer* c1 = new Customer;
        unique_ptr<Customer> c1{ new Customer };
        c1->setbk(b1);
        cout<<c1->getbk()->getbkdetails()<<endl;
        //delete c1;

        //Customer* c2 = new Customer;
        //unique_ptr<Customer> c2{ new Customer };
        //c2->setbk(b1);
        //cout << c2->getbk()->getbkdetails() << endl;
        //delete c2;

        //b1->showbankdetails();
        //delete b1;
    }
    cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
    return 0;
}

