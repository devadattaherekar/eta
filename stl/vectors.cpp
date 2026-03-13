#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Employee
{
	string empname;
	int id;
public: Employee(string nm,int id):empname(nm),id(id){}
	  void accept() {
		  cout << "Enter name and id" << endl;
		  cin >> empname >> id;
		}
	  void show() {
		  cout << "Entered info is ..." << endl;
		  cout << empname << " " << id << endl;
	  }
	  bool operator < (const Employee& e) // Note: For sort algorithm overload < operator
	  {	  
		  return id < e.id;
	  }
	  bool operator == (const Employee& e) // Note: For find algorithm overload == operator
	  {
		  return empname==e.empname? true:false;
	  }
};


int main()
{
	vector<Employee> v1;
	v1.push_back(Employee("hisham", 300));
	v1.push_back(Employee("george", 100));
	v1.push_back(Employee("rameshwara", 200));
	v1.push_back(Employee("ajinkya", 500));
	v1.push_back(Employee("amar", 400));

	sort(v1.begin(), v1.end());

	for (vector<Employee>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
		itr->show();
	
	auto i=find(v1.begin(), v1.end(), Employee("deva", 300));

	if (i != v1.end())
	{
		cout << "Employee name is present!" << "\n";
		i->show();
	}
	else
	{
		cout << "Record is not present!" << "\n";
	}
	//for (auto i : v1)
		//i.show();

	return 0;
}

