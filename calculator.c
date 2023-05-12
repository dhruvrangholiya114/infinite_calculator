#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int module(int a,int b)
{
	return a%b;
}



main()
{
	int a,b,choice;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	
	printf("Enter the value of b:- ");
	scanf("%d",&b);
	
	do
	{
		printf("Press 1 to add \n");
		printf("Press 2 to subtract \n");
		printf("Press 3 to multiply \n");
		printf("Press 4 to divide \n");
		printf("Press 5 to modulas \n");
		printf("Press 0 to exit \n");
		printf("Enter your choice= ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				printf(" addition of a and b is %d\n",add(a,b));
				break;
			case 2:
				printf(" subtraction of a and b is %d\n",sub(a,b));
				break;
			case 3:
				printf(" multiplication of a and b is %d\n",multi(a,b));
				break;
			case 4:
				printf(" division of a and b is %d\n",div(a,b));
				break;
			case 5:
				printf(" modules of a and b is %d\n",module(a,b));
				break;
				
		}
	}while(choice!=0);
	
}
