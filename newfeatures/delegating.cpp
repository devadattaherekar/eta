//C++11 allows delegating ctors to avoid duplication of code / inconsistency
#include<iostream>

using namespace std;
class Testing
{
	int x;
	float y;
	double z;
public:Testing();
	   Testing(int);
	   Testing(int,float);
	   Testing(int,float,double);
	   void show();
};

Testing::Testing():Testing(0)
{
	//x = 0;
	//y = 0;
	//z = 0;
	cout << "default ctor" << endl;
}
Testing::Testing(int xx):Testing(xx,0)
{
	//x = xx;
	//y = 0;
	//z = 0;
	cout << "int ctor" << endl;

}
Testing::Testing(int xx,float yy):Testing(xx,yy,0)
{
	//x = xx;
	//y = yy;
	//z = 0;
	cout << "int /float ctor" << endl;

}
Testing::Testing(int xx,float yy,double zz)
{
	x = xx;
	y = yy;
	z = zz;
	cout << "int/float/double ctor" << endl;

}
void Testing::show()
{
	cout << x << " " << y << " " << z << endl;
}
int main()
{
	//Testing t1;
	//t1.show();
	
	Testing t2(100);
	t2.show();

	//Testing t3(10,2.5);
	//t3.show();

	//Testing t4(1, 4.2f, 678.99);
	//t4.show();
	//return 0;
}