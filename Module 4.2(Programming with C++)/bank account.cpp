#include<iostream>
using namespace std;
class bankaccount
{
	int accountnumber;
	string name;
	string account;
	int amount;
	public:
		void inputdata()
		{
			cout<<"enter account number: "<<endl;
			cin>>accountnumber;
			cout<<"enter name of dipositor: "<<endl;
			cin>>name;
			cout<<"enter type of account: "<<endl;
			cin>>account;
			cout<<"enter amount: "<<endl;
			cin>>amount;
		}
		void displaydata()
		{
			cout<<"account number = "<<accountnumber<<endl;
			cout<<"name of dipositor = "<<name<<endl;
			cout<<"type of account = "<<account<<endl;
			cout<<"amount = "<<amount<<endl;
		}
};
class memberfunctions
{
	public:
		int assignvalues;
		int dipositamount;
		int withdrawamount;
		int balance;
		string name;
		
		void inputdata()
		{
			cout<<"enter assign values: "<<endl;
			cin>>assignvalues;
			cout<<"enter deposit an amount: "<<endl;
			cin>>dipositamount;
			cout<<"enter withdraw amount after checking balance: "<<endl;
			cin>>withdrawamount;
			cout<<"enter balance and name: "<<endl;
			cin>>balance;
			cin>>name;
		}
		void displaydata()
		{
			cout<<"assign values"<<assignvalues<<endl;
			cout<<"deposit an amount"<<dipositamount<<endl;
			cout<<"withdraw amount after checking balance"<<withdrawamount<<endl;
			cout<<"balance"<<balance<<endl;
			cout<<"name"<<name<<endl;
		}
};
main()
{
	bankaccount obj;
	obj.inputdata();
	obj.displaydata();
	
	memberfunctions o;
	o.inputdata();
	o.displaydata();
}
