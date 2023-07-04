//  WAP  to create simple calculator using class ....

#include<iostream>
using namespace std;
class simple_calculator
{
	public:
		int a;
		int b;
	void inputdata()
	{
		cout<<"enter the value of a:"<<endl;
		cin>>a;
		
		cout<<"enter the value of b:"<<endl;
		cin>>b;
	}
	void displaydata()
	{
		cout<<"the addition of a and b is:"<<a+b<<endl;
		cout<<"the multiplication of a and b is:"<<a*b<<endl;
		cout<<"the subtraction of a and b is:"<<a-b<<endl;
		cout<<"the division of a and b is:"<<a/b<<endl;
	}
};
main()
{
	simple_calculator obj;
	obj.inputdata();
	obj.displaydata();
}
