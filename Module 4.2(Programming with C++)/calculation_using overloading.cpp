//   to calculate the area of circle, rectangle and triangle using Function Overloading
 

#include<iostream>
using namespace std;
int calculate( int area , int breadth)
{
	int rectangle= area*breadth;
	return rectangle;
}
float calculate(float area , float breadth)
{
	float triangle= 0.5*area*breadth;
	return triangle;
}
float calculate(float area)
{
	float circle= 3.14*area*area;
	return circle;
};
main()
{
	cout<<"\narea of rectangle: "<<calculate(2,4);
	cout<<"\narea of triangle: "<<calculate(2,5);
	cout<<"\narea of circle: "<<calculate(2);
}
