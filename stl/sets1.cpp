#include <iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

class Employee
{
	string empname;
	int id;
public: Employee(string nm, int id) :empname(nm), id(id) {}
	  void accept() {
		  cout << "Enter name and id" << endl;
		  cin >> empname >> id;
	  }
	  //Note: All methods in set and multiset have to be const!
	  void show()const {
		  cout << "Entered info is ..." << endl;
		  cout << empname << " " << id << endl;
	  }
	  // Note: For sort algorithm overload < operator 
	  // const members are mandatory for set 
	  bool operator < (const Employee& e)const 
	  {
		  return id < e.id;
	  }
	  bool operator == (const Employee& e)const // Note: For find algorithm overload == operator
	  {
		  return empname == e.empname ? true : false;
	  }
};


int main()
{
	multiset<Employee> s1;
	s1.insert(Employee("hisham", 300));
	s1.insert(Employee("hisham", 300));
	//s1.insert(Employee("george", 100));
	//s1.insert(Employee("george", 800));
	//s1.insert(Employee("hisham", 800));
	//s1.insert(Employee("rameshwara", 200));
	//s1.insert(Employee("ajinkya", 500));
	//s1.insert(Employee("amar", 400));

	for (set<Employee>::iterator ptr = s1.begin(); ptr != s1.end(); ++ptr)
		ptr->show();

	//for (auto i : s1)
		//i.show();

	//sort(s1.begin(), s1.end()); // Amar Thank you! Note: sort does not work in set

	//for (vector<Employee>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
	//	itr->show();

	auto i = find(s1.begin(), s1.end(), Employee("deva", 300));

	if (i != s1.end())
	{
		cout << "Employee name is present!" << "\n";
		i->show();
	}
	else
	{
		cout << "Record is not present!" << "\n";
	}

	return 0;
}

