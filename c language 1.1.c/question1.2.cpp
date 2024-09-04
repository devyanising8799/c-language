#include<stdio.h>
#include<conio.h>

main()
{
	int n,f=1;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	do
	{
		f=f*n;
		n--;
	}while(n<=1);
	
	printf("The factorial is %d",f);
}