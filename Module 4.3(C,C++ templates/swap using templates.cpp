#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T temp=a;
	a=b;
	b=temp;
}
main()
{
	char a='A', b='B';
	int x=10,y=20;
	cout<<"Before swap A:"<<a<<" | B:"<<b<<endl;
	swapping(a,b);
	cout<<"After swap A:"<<a<< " | B:"<<b<<endl; 
	
	cout<<"Before swap X:"<<x<<" | Y:"<<y<<endl;
	swapping(x,y);
	cout<<"After swap X:"<<x<< " | Y:"<<y<<endl; 
}
