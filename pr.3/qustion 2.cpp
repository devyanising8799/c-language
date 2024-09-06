#include<stdio.h>
#include<conio.h>

main()
{
	char i='a';
	
	do
	{
		printf("%c",i);
		i+=4;
	}while(i<'z');
}