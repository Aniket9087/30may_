#include<stdio.h>
#include<stdbool.h>
main()
{
	int status=true;
	while(status){
	
	printf("\nSamosa     50 rs/piece");
	printf("\nKachori     70 rs/piece");
	printf("\nBhajiya     80 rs/piece");
	printf("\nBhel     40 rs/piece");
	
	int choose,Samosa,Kachori,Bhajiya,Bhel;
	int total;
	printf("\nwhat do you want :");
	scanf("%d",&choose);
	if (choose==1)
	{
		printf("you choose Samosa ");
	}
	else if (choose==2)
	{
		printf("you choose Kachori ");
	}
	else if (choose==3)
	{
		printf("you choose Bhajiya ");
	}
	else if (choose==4)
	{
		printf("you choose Bhel ");
	}
	
	int quantity;
	printf("\nenter the quantity :");
	scanf("%d",&quantity);
	
	if (choose==1)
	{
	    printf("your amount %d",Samosa = quantity*50);
	}
	else if (choose==2)
	{
		printf("your amount %d",Kachori = quantity*70);
	}
	else if (choose==3)
	{
		printf("your amount %d",Bhajiya = quantity*80);
	}
	else if (choose==4)
	{
		printf("your amount %d",Bhel = quantity*40);
	}
	
	printf("\ndo you want anything else ?");
	
	int i;
	printf("\n yes | press 1...\n no | press 2...");
	scanf("%d",&i);
	switch (i)
	{
		case 1:
	        printf("\nsamosa     50 rs/piece");
	        printf("\nkachori     70 rs/piece");
	        printf("\nbhajiya     80 rs/piece");
	        printf("\nbhel     40 rs/piece");
	        break;
	        
	    case 2:
	    	printf("\nThank you visit again...");
	    	status=false;
	    	break;
	    	
	    case 3:
		    printf("\ninvalid value");
			break;	
	}
	total=Samosa+Kachori+Bhajiya+Bhel;
	printf("\nYour total amount is %d",total);
	
}
}    


