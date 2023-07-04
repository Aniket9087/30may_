#include<iostream>
using namespace std;
int addition(int number_1, int number_2)
{
	return number_1+number_2;
}
int subtraction(int number_1, int number_2)
{
	return number_1-number_2;
}
int multiplication(int number_1, int number_2)
{
	return number_1*number_2;
}
int division(int number_1, int number_2)
{
	return number_1/number_2;
}
main()
{
	cout<<"\nAddition of number 1 and number 2 is: "<<addition(30,40);
	cout<<"\nSubtraction of number 1 and number 2 is: "<<subtraction(40,30);
	cout<<"\nMultiplication of number 1 and number 2 is: "<<multiplication(20,30);
	cout<<"\nDivision of number 1 and number 2 is: "<<division(20,10);
}
