#include<stdio.h>
#include<conio.h>

main()
{
  	int i,n,first=0,second=1,sum;
  	
	printf("Enter n :");
	scanf("%d",&n);
	
	printf("%d %d",first,second);
	
	for(i=1;i<=n;i++)
	
	{
		sum=first+second;
		printf(" %d ", sum);
		first=second;
		second=sum;
	}  	
}