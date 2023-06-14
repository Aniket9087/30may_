#include<stdio.h>
main()
// Simple interest
{
	float P,R,N;
	printf("enter the value of P :");
	scanf("%f",&P);
	
	printf("enter the value of R :");
	scanf("%f",&R);
	
	printf("enter the value of N :");
	scanf("%f",&N);
	
	printf("The Simple interest is %f",P*R*N/100);
}

