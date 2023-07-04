//  WAP   of Addition, Subtraction, Division, Multiplication using constructor....


#include<iostream>
using namespace std;
class calculation
{
	public:
		calculation()
		{
			cout<<"welcome to constructor calculation ..\n";
		}
		calculation(int a,int b)
		{
			cout<<"the addition of a and b is:"<<a+b<<endl;
		    cout<<"the multiplication of a and b is:"<<a*b<<endl;
			cout<<"the subtraction of a and b is:"<<a-b<<endl;
			cout<<"the division of a and b is:"<<a/b<<endl;
		}
};
main()
{
	calculation s1=calculation();
	calculation s2=calculation(30,20);
}
