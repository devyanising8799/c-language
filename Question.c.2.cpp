#include<stdio.h>
#include<conio.h>

main()
{
	int num;
	
	printf("Enter the num:");
	scanf("%d",&num);
	
	if(num>=0)
	{
		printf("the num is positive");
	}
	else if (num==0)
	{
		printf("the num is natural");
	}
	else
	{
		printf("the num is negative");
	}
}