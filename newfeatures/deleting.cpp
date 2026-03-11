#include<iostream>
//Note: you can delete if you dont want promotions and demotions to be carried out 
// by some method. You can also use delete on copy ctor/ default ctor/ dest / move ctor/ move assignment
using namespace std;
class Testing
{
	int x;
public:Testing() { x = 0; };
	  Testing(const Testing&) = delete;
	  void setx(int xx) 
	  {
		  x= xx ;
	  }
	  void setx(float) = delete;

	  void show() { cout << x << endl; }
};

//void foo(float xx) { cout << "float " << xx << endl; }
//void foo(double xx) { cout << "double " << xx << endl; }
//void foo(int xx) { cout << "int " << xx << endl; }


int main()
{
	//foo(4.5);
	//foo(4.5);

	Testing t1;//default ctor will be synthezised
	//Testing t2(t1); //error as copy ctor is intdeleted
	
	//t1.setx(99.45f); //error as float is deleted
	t1.setx(99);
	
	//t1.setx(9.5f);
	//t1.show();

	return 0;
}
