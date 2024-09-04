#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,sum=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	i=n;
	while(i<=n)
	{
		printf("sum = %d /n",sum,i);
		sum=sum+i;
		i++;
		
	}
	printf("The sum %d",sum);
}