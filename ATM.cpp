#include<stdio.h>
main()
{
	printf(".....................WELCOME TO THE ATM PROVIDE BY STATE BANK OF INDIA.....................");
	
	float x,y;
	char character;
	printf("\n\nEnter your amount : ");
	scanf("%f",&x);
	printf("\npress 1 for deposite amount\npress 2 for credit amount\npress 3 to check your balance\n");
	scanf(" %c",&character);
	switch(character)
	{
		case '1':
			printf("enter deposite amount : ");
			scanf("%f",&y);
			x=x+y;
			printf("\nNew amount is=%f",x);
			break;
		case '2':
			printf("enter credit amount : ");
			scanf("%f",&y);
			if(x>=y)
			{
				x=x-y;
			    printf("New amount is=%f",x);
			}
			else
			{
				printf("you have insufficient amount");
			}
			break;
		case '3':
			printf("your balance is=%f",x);
			break;
	}
	
}
