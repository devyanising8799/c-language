#include<stdio.h>
#include<conio.h>

main()
{
	int hra,da,ta,discount;
	float salery,gross,salary,total;
	
	printf("enter the salary");
	scanf("%f",&salary);
	printf("enter the hra");
	scanf("%f",&hra);
    hra=(salary*hra)/100;
	printf("enter the da");
	scanf("%f",&da);
	da=(salary*da)/100;
	printf("enter the ta");
	scanf("%f",&ta);
	ta=(salary*ta)/100;
	 
    total=hra+da+ta+salary;
	 
	printf("the gross salary %f",total);
