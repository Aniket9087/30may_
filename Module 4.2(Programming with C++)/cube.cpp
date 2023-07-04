#include<iostream>
using namespace std;
inline int cube(int x)
{
	int result=x*x*x;
	return result;
}
main()
{
	cout<<"cube is : "<<cube(8);
}
