#include<iostream>
using namespace std;
class student
{
	public:
		void roll_number(int rollnumber)
		{
			cout<<"enter the roll number :"<<endl;
			cin>>rollnumber;
			cout<<"your roll number is"<<rollnumber<<endl;
		}
};
class test : public student
{
	public:
		void mark(int sub1,int sub2,int total)
		{
			cout<<"enter the obtained marks of  subject 1"<<endl;
			cin>>sub1;
			cout<<"your obtained marks of subject 1 is: "<<endl;
			
			cout<<"enter the obtained marks of  subject 2"<<endl;
			cin>>sub2;
			cout<<"your obtained marks of subject 2 is: "<<endl;
			
			total=sub1+sub2;
			cout<<"the total of two subject is :"<<total<<endl;
		}
};
class result: public test
{
	public:
		void total_marks(int totalmarks)
		{
			cout<<"this is your result";
		}
};
main()
{
	result obj;
	obj.roll_number(1);
	obj.mark(1,1,1);
	obj.total_marks(2);
}
