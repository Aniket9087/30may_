#include<stdio.h>
main()
//  check if the given year is a leap year or not...
{
	int year;
	printf("enter the year :");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("the year is leap year");
	}
	else
	{
		printf("the year is not leap year");
	}
}
