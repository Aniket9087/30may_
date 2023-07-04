#include<iostream>
using namespace std;
template < typename T>
void sort (T a[],int n)
{
	int number;
	int j;
	int s;
	T temp;
	
	for(j=0;j<n-1;j++)
	{
		number=j;
		for(s=j+1;s<n;s++)
		{
			if(a[s]<a[number])
			number=s;
			{
				if(number !=j)
				{
					number=a[j];
					a[j]=a[number];
					a[number]=temp;
				}
			}
			
		}
	}
	cout<<"\n sorted elements are:\n";
	for(j=0;j<n;j++)
	cout<<"\t"<<a[j];
}
main()
{
	int n,j,ch;
	int a[5];
	float b[5];
	do
	{
		cout<<"\n selection sort using function template";
		cout<<"\n 1. sort integer numbers.";
		cout<<"\n 2. sort float numbers.";
		cout<<"\n 3. exit. ";
		cout<<"\nenter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\n sorting integer numbers";
				cout<<"\n enter how many number wanted to sort";
				cin>>n;
				for(j=0;j<n;j++)
				cin>>a[j];
				sort<int>(a,n);
				break;
				
			case 2:
				cout<<"\n sorting floating point numbers";
				cout<<"\n enter how many number wanted to sort";
				cin>>n;
				for(j=0;j<n;j++)
				cin>>b[j];
				sort<float>(b,n);
				break;
				
			case 3:
				exit(0);
					
		}
	}
	while(ch !=3);
}
