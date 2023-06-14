// WAP to convert year into day and day into year...
#include<stdio.h>
main()
{
	int days;
	int year;
	
	printf("enter a day :");
	scanf("%d",&days);
	
	year= days/365;
	days= year*365;
	
	printf("the year is %d\n",year);
	printf("the days is %d\n",days);
} 
