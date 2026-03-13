#include<thread>
#include<iostream>
#include<mutex>
#define TRANSACTIONS 100000

using namespace std;

void deposit(int &acc,mutex &m)
{
	for (int i = 0; i < TRANSACTIONS; ++i)
	{
		lock_guard<mutex>lock(m);//this is scoped lock which is automatically unlocked when it goes out of scope
		++acc;
	}
}
void withdraw(int &acc,mutex &m)
{
	for (int i = 0; i < TRANSACTIONS; ++i)
	{
		lock_guard<mutex>lock(m);//this is scoped lock which is automatically unlocked when it goes out of scope
		--acc;
	}
}
int main()
{
	unsigned int threads = thread::hardware_concurrency();

	cout << "Thread supported by my system " << threads << endl;
	mutex m;
	int account = 100;
	thread t1(deposit, ref(account),ref(m));
	thread t2(withdraw, ref(account),ref(m));

	t1.join();
	t2.join();

	cout << "After the threads, account value is " << account << endl;
	return 0;
}