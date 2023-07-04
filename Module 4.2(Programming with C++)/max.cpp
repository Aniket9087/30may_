#include<iostream>
using namespace std;
class A
{
	private:
		int x;int y;
		public:
			friend void setData();
};
void setData()
{
	A obj;
	obj.x;
	obj.y;
	
	cout<<"enter the number 1:"<<endl;
	cin>>obj.x;
	cout<<"enter the number 2:"<<endl;
	cin>>obj.y;
	
	if(obj.x>obj.y)
	{
		cout<<"the max number is number 1"<<endl;
	}
	else if(obj.x<obj.y)
	{
		cout<<"the max number is number 2"<<endl;
	}
	else
	{
		cout<<"invalid value"<<endl;
	}
}
main()
{
	setData();
}
