#include<thread>
#include<iostream>
#include<list>
#define TRANSACTIONS 100000

using namespace std;

void Deposit()
{
	cout << "Depositing amount" << endl;
	list<int> lst;
	for (int i = 0; i < TRANSACTIONS; ++i)
		lst.push_back(i);
	cout << "Depositing done" << endl;
}


int main()
{
	cout << "Main started" << endl;
	thread t1(Deposit);
	cout << "Main Ends" << endl;

	t1.join();//call join somewhere before the thread object is destoryed
	// call join on child thread for main to stop

	// Detach function can be used to run a thread in background
	// Detached thread cannot be joined
	// t1.detach();
	// detached thread will automatically release its resources when thread object is destroyed
	if(t1.joinable())
		t1.join();
	else
		cout << "Thread non joinable" << endl;

	//system("pause");
	return 0;
}