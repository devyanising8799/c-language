#include<stdio.h>
#include<conio.h>

main()
{
	int num1,num2;
	
	printf("Enter First num:");
	scanf("%d",&num1);
	printf("Enter second num:");
	scanf("%d",&num2);
	
	if (num1<num2)
	{
		printf("first num is minimum");
	}
	else if (num1==num2)
	{
		printf("both num are same");
	}
	else 
	{
		printf("second num is minimum");
	}
}