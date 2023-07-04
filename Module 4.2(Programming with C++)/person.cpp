#include<iostream>
using namespace std;
class student
{
	public:
		void percentage(int total_mark, int subject,float percentage)
		{
			cout<<"you have 5 subject"<<endl;
			
			cout<<"enter your total mark from 500 :"<<endl;
			cin>>total_mark;
		
//			cin>>subject;		
			percentage=(total_mark*100)/500;
			cout<<"your percentage is : "<<percentage<<endl;
		}
			
};
class teacher
{
	public:
		void salary(int salary)
		{
			cout<<"Enter the salary: ";
			cin>>salary;
			cout<<"teacher salary is :"<<salary<<endl;
		}
};
class person: public student, public teacher
{
	public:
		void name_and_age(string name, int age)
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"the name of person is :"<<name<<endl;
			
			cout<<"Enter your age : ";
			cin>>age;
			cout<<"the age of the person is :"<<age<<endl;
		}
};
main()
{
	person obj;
	obj.percentage(22,22,22);
	obj.salary(22);
	obj.name_and_age("dilip",15);
}
