#include<iostream>
using namespace std;
class A
{
	private :
		int a;
		int b;
		public:
			friend void setData();
			
};
void setData()
{
	A obj;
	obj.a=40;
	obj.b=30;
	
	obj.a=obj.a+obj.b;
	
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;
	
	cout<<"the value of b:"<<obj.b<<endl;
	cout<<"the value of a:"<<obj.a<<endl;
	
}
main()
{
	setData();
}
