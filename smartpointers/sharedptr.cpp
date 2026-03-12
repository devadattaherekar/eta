#include <iostream>
#include <memory> 
#include<crtdbg.h>
//Note: Automatic Memory Management in C++11
// 1. unique_ptr 2. shared_ptr 3. weak_ptr  4. auto_ptr (deprecated c++17 onwards) heaven!

using namespace std;

class Vehicle
{
	string name;
public: Vehicle() { cout << "vehicle created" << endl; }
	  Vehicle(string name) :name(name) { cout << name << " created " << endl; }
	  ~Vehicle() { cout << name << " destroyed" << endl; }
	  void start() { cout << name << " started..." << endl; }
	  void stop() { cout << name << " stopped!!!" << endl; }
};

void vehicle_factory()
{
	shared_ptr<Vehicle> newv2{ new Vehicle("bmw") };
	{
		shared_ptr<Vehicle> newv3 = newv2;//copy can be created in shared_ptr
		newv3->start();
		newv2->start();
		cout << newv2.use_count() << endl;
		newv2.reset(new Vehicle("mercedez"));
		newv2->start();
		cout << newv2.use_count() << endl;

	}
	cout << newv2.use_count() << endl;
}

int main()
{
	{
		//Vehicle* newv1 = new Vehicle("bmw");
		//shared_ptr<Vehicle> newv1{ new Vehicle("bmw") };
		//shared_ptr<Vehicle> newv1 = make_shared<Vehicle>( "Jaguar" );
		//newv1->start();
		//newv1->stop();
		vehicle_factory();
		//delete newv1;
	}
	cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
	return 0;
}